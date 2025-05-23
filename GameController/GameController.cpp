#include "GameController.h"
#include "DataBase/DataBaseManager.h"
#include <QDebug>

GameController::GameController(QObject *parent): QObject(parent){}

void GameController::startNewGame(const QString &difficulty) {
    currentDifficulty_ = difficulty;

    auto wordInfo = DataBaseManager::instance().getRandomWord(difficulty);

    const QString newWord = std::get<0>(wordInfo);
    const QString newWordDefinition = std::get<1>(wordInfo);
    const int id = std::get<2>(wordInfo);

    if (newWord.isEmpty() || id < 0) {
        qWarning() << "No word found for difficulty" << difficulty;
        return;
    }
    game_ = Game();
    game_.setSecretWord(newWord);
    game_.setDefinition(newWordDefinition);

    emit displayUpdated(game_.getCurrentDisplay());
    emit descriptionUpdate(newWordDefinition);
    emit imageUpdated(game_.errors());
    emit attemptsLeft(Game::getMaxError());
}

void GameController::guessLetter(QChar letter) {
    constexpr int maxErrors = Game::getMaxError();
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