#include "Game.h"

void Game::setSecretWord(const QString& word) {
    secretWord_ = std::move(word.toUpper());
    QString mainDisplay;
    mainDisplay.reserve(word.size() * 2 - 1);
    for (int i = 0; i < secretWord_.size(); i++) {
        mainDisplay += '_';
        if (i + 1 < secretWord_.size())
            mainDisplay += ' ';
    }
    currentDisplay_ = std::move(mainDisplay);
}

void Game::setDefinition(const QString& def) {
    definition_ = std::move(def);
}


bool Game::guess(QChar letter) {
    if (secretWord_.contains(letter))
        return true;
    ++errorCount_;
    return false;
}

void Game::updateDisplay(QChar letter) {
    QString newDisplay;

    for (int i = 0; i < secretWord_.size(); ++i) {
        QChar real = secretWord_.at(i);
        // out <- letter z secret word lub _
        QChar out = (letter == real) ? real : currentDisplay_.at(2*i);
        newDisplay += out;
        if (i + 1 < secretWord_.size())
            newDisplay += ' ';
    }
    currentDisplay_ = std::move(newDisplay);
}
bool Game::isLost() const {
    return errorCount_ >= ERRORMAX;
}

QString Game::getSecretWord() const {
    QString secretWordWithSpaces;
    secretWordWithSpaces.reserve(secretWord_.size() * 2 - 1);
    for (int i = 0; i < secretWord_.size(); i++) {
        secretWordWithSpaces += secretWord_.at(i);
        if (i + 1 < secretWord_.size())
            secretWordWithSpaces += ' ';
    }
    return secretWordWithSpaces;
}

QString Game::getDefinitionWord() const {
    return definition_;
}



bool Game::isWon() const {
    return !currentDisplay_.contains('_');
}
