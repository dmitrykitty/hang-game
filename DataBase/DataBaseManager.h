#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>

using WordInfo = std::tuple<QString, QString, int>;

class DataBaseManager {
public:
    static DataBaseManager& instance();

    bool openDatabase(const QString& file = "hangman.db");
    void createTables();
    bool isWordExists(const QString& word) const;

    WordInfo getRandomWord(const QString &difficulty);
    void setDifficulty(QString difficulty);

private:
    DataBaseManager() = default;

    DataBaseManager(const DataBaseManager&) = delete;

    DataBaseManager& operator=(const DataBaseManager&) = delete;

    ~DataBaseManager() {
        if (db.isOpen())
            db.close();
    }

    QSqlDatabase db;
    QString currentDifficulty;
};


#endif //DATABASEMANAGER_H
