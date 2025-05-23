import csv
import sqlite3
from pathlib import Path

# scripts directory
BASE_DIR = Path(__file__).resolve().parent
# path to SQL DB
DB_PATH = BASE_DIR.parent / 'cmake-build-debug' / 'hangman.db'

# list of CSV files
CSV_DIR = BASE_DIR / 'CSV'
CSV_FILES = [
    CSV_DIR / 'easy.csv',
    CSV_DIR / 'medium.csv',
    CSV_DIR / 'hard.csv',
]

conn = sqlite3.connect(DB_PATH)
cur = conn.cursor()
cur.executescript("""
-- table to store each word, its definition, and its difficulty level
CREATE TABLE IF NOT EXISTS words (
    id         INTEGER PRIMARY KEY AUTOINCREMENT,
    word       TEXT    UNIQUE NOT NULL,
    definition TEXT    NOT NULL,
    difficulty TEXT    CHECK(difficulty IN ('easy','medium','hard')) NOT NULL
);
-- table to track statistics (how many times each word was guessed or failed)
CREATE TABLE IF NOT EXISTS stats (
    word_id    INTEGER UNIQUE NOT NULL,
    guessed_cnt INTEGER DEFAULT 0,
    failed_cnt  INTEGER DEFAULT 0,
    FOREIGN KEY(word_id) REFERENCES words(id)
);
""")
conn.commit()

for csv_path in CSV_FILES:
    if not csv_path.exists():
        print(f"file not found: {csv_path}")
        continue

    with csv_path.open(newline='', encoding='utf-8') as f:
        reader = csv.reader(f)

        # skip header
        header = next(reader, None)

        for row in reader:
            if len(row) < 3:
                # too few columns -- skip this row
                continue


            # extract fields:
            #   - first column is the word
            #   - last column is the difficulty level
            #   - everything in between is the definition (join them back)
            word = row[0].strip()
            difficulty = row[-1].strip()
            definition = ",".join(col.strip() for col in row[1:-1])

            if not word or not definition or difficulty not in ('easy', 'medium', 'hard'):
                continue

            # insert ignoring dublicates
            cur.execute("""
                INSERT OR IGNORE INTO words (word, definition, difficulty)
                VALUES (?, ?, ?)
            """, (word, definition, difficulty))


            # add word to stats
            cur.execute("""
                INSERT OR IGNORE INTO stats (word_id) 
                VALUES ((SELECT id FROM words WHERE word=?))
            """, (word,))

    conn.commit()
    print(f"loaded {csv_path.name}")

conn.close()
