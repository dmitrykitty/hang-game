#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>

using WordInfo = std::tuple<QString, QString, int>;

class DataBaseManager {
public:
    static DataBaseManager& instance();

    bool openDatabase(const QString& file = "hangman.db");

    WordInfo getRandomWord(const QString& difficulty);

    void setDifficulty(const QString& difficulty) const;

    [[nodiscard]] QString getDifficulty() const;

    [[nodiscard]] bool wordExists(const QString& word) const;

    [[nodiscard]] bool addUserWord(const QString& word, const QString& def, const QString& diff) const;

    bool deleteAllUserWords();

    void updateStats(int wordId, bool guessed);

    void updateTop5();

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
