#pragma once

#include <QObject>
#include <QString>
#include "GameLogic/Game.h"
#include "DataBase/DataBaseManager.h"

class GameController : public QObject {
    Q_OBJECT

public:
    explicit GameController(QObject* parent = nullptr);

public slots:
    void startNewGame(const QString& difficulty);

    void guessLetter(QChar letter);

signals:
    /// show new word mask
    void displayUpdated(const QString& newDisplay);

    void descriptionUpdate(const QString& newDescription);

    void imageUpdated(int errorCount);

    void gameWon();

    void gameLost(const QString& secretWord);

    void attemptsLeft(int remainingAttempts);

private:
    Game game_;
    QString currentDifficulty_;
    DataBaseManager& db_ = DataBaseManager::instance();
};
