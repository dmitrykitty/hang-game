#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>

using WordInfo = std::tuple<QString, QString, int>;

class DataBaseManager {
public:
    static DataBaseManager& instance();

    bool openDatabase(const QString& file = "hangman.db");
    [[nodiscard]] bool isWordExists(const QString& word) const;

    WordInfo getRandomWord(const QString &difficulty);
    void setDifficulty(const QString& difficulty);
    [[nodiscard]] QString getDifficulty() const ;

private:
    DataBaseManager() = default;

    DataBaseManager(const DataBaseManager&) = delete;
    DataBaseManager& operator=(const DataBaseManager&) = delete;

    ~DataBaseManager() {
        if (db_.isOpen())
            db_.close();
    }

    QSqlDatabase db_;
    QString currentDifficulty_;
};


#endif //DATABASEMANAGER_H
