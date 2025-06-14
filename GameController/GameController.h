#pragma once

#include <QObject>
#include <QString>
#include "GameLogic/Game.h"
#include "DataBase/DataBaseManager.h"
#include <QSqlQueryModel>

class GameController : public QObject {
    Q_OBJECT

public:
    explicit GameController(QObject* parent = nullptr);

    [[nodiscard]] QString getCurrentDifficulty() const { return currentDifficulty_; }

public slots:
    void startNewGame();

    void onSettingsDifficulty();

    void onAddCustomWord() const;

    void guessLetter(QChar letter);

    void setCurrentDifficulty(const QString& diff);

signals:
    /// show new word mask
    void displayUpdated(const QString& newDisplay);

    void descriptionUpdate(const QString& newDescription);

    void imageUpdated(int errorCount);

    void gameWon();

    void gameLost(const QString& secretWord);

    void attemptsLeft(int remainingAttempts);

    void currentDifficultyChanged(const QString& diff);


private:
    Game game_;
    QString currentDifficulty_;
    DataBaseManager& db_ = DataBaseManager::instance();
    int currentWordId_ = -1;
};

