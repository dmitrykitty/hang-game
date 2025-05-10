#include "GameController.h"
#include <QDebug>

GameController::GameController(QObject *parent): QObject(parent){}

void GameController::startNewGame(const QString &difficulty) {
    currentDifficulty_ = difficulty;

    QString newWord = "VECTOR";
    game_ = Game();
    game_.setSecretWord(newWord);

    emit displayUpdated(game_.getCurrentDisplay());
    emit imageUpdated(game_.errors());
}

void GameController::guessLetter(QChar letter) {
    const int maxErrors = Game::getMaxError();
    if (game_.guess(letter)) {
        game_.updateDisplay(letter);
        emit displayUpdated(game_.getCurrentDisplay());
    } else {
        emit imageUpdated(game_.errors());
        emit attemptsLeft(maxErrors - game_.errors());
    }


    if (game_.isWon())   emit gameWon();
    if (game_.isLost()) {
        emit gameLost(game_.getSecretWord());
    }
}