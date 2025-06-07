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

bool DataBaseManager::isWordExists(const QString& word) const {
    QSqlQuery q;
    q.prepare("SELECT COUNT(1) FROM words WHERE word = :w;");
    q.bindValue(":w", word);
    if (!q.exec() || !q.next()) {
        qWarning() << "wordExists query error:" << q.lastError().text();
        return false;
    }
    return (q.value(0).toInt() > 0);
}


WordInfo DataBaseManager::getRandomWord(const QString& difficulty) {
    QSqlQuery q;
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

void DataBaseManager::setDifficulty(const QString& difficulty) {
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
    return "Easy";
}

