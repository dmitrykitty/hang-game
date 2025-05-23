#include "DatabaseManager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

DataBaseManager& DataBaseManager::instance() {
    static DataBaseManager inst;
    return inst;
}

bool DataBaseManager::openDatabase(const QString& file) {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(file);
    if (!db.open()) {
        qCritical() << "DB error:" << db.lastError().text();
        return false;
    }
    //createTables();
    return true;
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
