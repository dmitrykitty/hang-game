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
