#include "DatabaseManager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

DataBaseManager& DataBaseManager::instance() {
    static DataBaseManager inst;
    return inst;
}

bool DataBaseManager::openDatabase(const QString& file) {
    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(file);
    if (!db_.open()) {
        qCritical() << "DB error:" << db_.lastError().text();
        return false;
    }
    //createTables();
    return true;
}

WordInfo DataBaseManager::getRandomWord(const QString& difficulty) {
    QSqlQuery q(db_);
    q.prepare(R"(
        SELECT id, word, definition
        FROM words
        WHERE difficulty = :lvl
        ORDER BY RANDOM()
        LIMIT 1;
    )");
    q.bindValue(":lvl", difficulty);

    if (!q.exec() || !q.next()) {
        qCritical() << "getRandomWord failed:" << q.lastError().text();
        return {QString(), QString(), -1};
    }

    int id = q.value(0).toInt();
    QString w = q.value(1).toString();
    QString def = q.value(2).toString();
    return {w, def, id};
}

void DataBaseManager::setDifficulty(const QString& difficulty) const {
    QSqlQuery q(db_);
    q.prepare(R"(
        INSERT INTO settings(key, value)
        VALUES(:k, :v)
        ON CONFLICT(key) DO UPDATE SET value = :v
    )");
    q.bindValue(":k", "difficulty");
    q.bindValue(":v", difficulty);
    if (!q.exec())
        qDebug() << "ERROR writing difficulty:" << q.lastError().text();
}

QString DataBaseManager::getDifficulty() const {
    QSqlQuery q(db_);
    q.prepare("SELECT value FROM settings WHERE key = :k");
    q.bindValue(":k", "difficulty");
    if (q.exec() && q.next()) {
        return q.value(0).toString();
    }
    return "easy";
}

bool DataBaseManager::wordExists(const QString& word) const {
    QSqlQuery q(db_);
    q.prepare("SELECT COUNT(1) FROM words WHERE word = :w");
    q.bindValue(":w", word);
    if (!q.exec() || !q.next()) {
        qWarning() << "wordExists query error:" << q.lastError().text();
        return false;
    }
    return q.value(0).toInt() > 0;
}

bool DataBaseManager::addUserWord(const QString& word, const QString& def, const QString& diff) const {
    QSqlQuery q(db_);
    q.prepare(R"(
        INSERT INTO words(word, definition, difficulty, word_type)
        VALUES(:w,:d,:diff,'user')
    )");
    q.bindValue(":w", word);
    q.bindValue(":d", def);
    q.bindValue(":diff", diff);

    if (!q.exec()) {
        qCritical() << "addUserWord failed:" << q.lastError().text();
        return false;
    }

    QSqlQuery q2(db_);
    q2.prepare(R"(
        INSERT OR IGNORE INTO stats (word_id)
        VALUES ((SELECT id FROM words WHERE word = :w));
    )");
    q2.bindValue(":w", word);

    if (!q2.exec()) {
        qCritical() << "addUserWord stats init failed:" << q2.lastError().text();
        return false;
    }

    return true;
}

bool DataBaseManager::deleteAllUserWords() {
    QSqlQuery q;

    if (!q.exec(R"(
        DELETE FROM stats
         WHERE word_id IN (
             SELECT id FROM words WHERE word_type='user'
         );
    )")) {
        qCritical() << "deleteAllUserWords (stats) failed:" << q.lastError().text();
        return false;
    }

    if (!q.exec(R"(
        DELETE FROM words WHERE word_type='user';
    )")) {
        qCritical() << "deleteAllUserWords (words) failed:" << q.lastError().text();
        return false;
    }

    return true;
}

// void DataBaseManager::updateStats(int wordId, bool guessed) {
//     QSqlQuery q;
//     if (guessed) {
//         q.prepare("UPDATE stats SET guessed_cnt = guessed_cnt + 1 WHERE word_d = :id;");
//     } else {
//         q.prepare("UPDATE stats SET failed_cnt = failed_cnt + 1 WHERE word_d = :id;");
//     }
//     q.bindValue(":id", wordId);
//     q.exec();
//
//     updateTop5();
// }
//
// void DataBaseManager::updateTop5() {
//     QSqlQuery clear;
//     clear.exec("DELETE FROM top5");
//
//     QSqlQuery insert;
//     insert.prepare(R"(
//         INSERT INTO top5(word, guessed_cnt, failed_cnt)
//         SELECT w.word, s.guessed_cnt, s.failed_cnt
//         FROM stats s
//         JOIN words w ON s.word_id = w.id
//         ORDER BY s.failed_cnt DESC
//         LIMIT 5
//     )");
//     insert.exec();
// }
