#include "Game.h"

void Game::setSecretWord(const QString& word) {
    secretWord = std::move(word.toUpper());
    QString mainDisplay;
    for (int i = 0; i < secretWord.size(); i++) {
        mainDisplay += '_';
        if (i + 1 < secretWord.size())
            mainDisplay += ' ';
    }
    currentDisplay = std::move(mainDisplay);
}

bool Game::guess(QChar letter) {
    if (secretWord.contains(letter))
        return true;
    ++errorCount;
    return false;
}

void Game::updateDisplay(QChar letter) {
    QString newDisplay;

    for (int i = 0; i < secretWord.size(); ++i) {
        QChar real = secretWord.at(i);
        // либо открываем букву, либо оставляем _
        QChar out = (letter == real) ? real : currentDisplay.at(2*i);
        newDisplay += out;
        if (i + 1 < secretWord.size())
            newDisplay += ' ';
    }
    currentDisplay = std::move(newDisplay);
}

bool Game::isLost() const {
    return errorCount >= ERRORMAX;
}

bool Game::isWon() const {
    return !currentDisplay.contains('_');
}
