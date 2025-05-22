#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>

class DataBaseManager {
public:
    static DataBaseManager& instance();

    bool openDatabase(const QString& file = "hangman.db");

private:
    DataBaseManager() = default;

    DataBaseManager(const DataBaseManager&) = delete;

    DataBaseManager& operator=(const DataBaseManager&) = delete;

    ~DataBaseManager() {
        if (db.isOpen())
            db.close();
    }

    QSqlDatabase db;
};


#endif //DATABASEMANAGER_H
