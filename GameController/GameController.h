#pragma once

#include <QObject>
#include <QString>
#include "GameLogic/Game.h"
//#include "DatabaseManager.h"

class GameController : public QObject {
    Q_OBJECT
public:
    explicit GameController(QObject *parent = nullptr);

    public slots:
    /// get new word and restart the game
    void startNewGame(const QString &difficulty);

    /// letter clicked
    void guessLetter(QChar letter);

    signals:
        /// sho new word mask
        void displayUpdated(const QString &newDisplay);

    void imageUpdated(int errorCount);

    void gameWon();

    void gameLost();

private:
    Game game_;
    QString currentDifficulty_;
    //DatabaseManager &db_ = DatabaseManager::instance();
};



