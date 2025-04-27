//
// Created by Lenovo on 27/04/2025.
//

#include "Game.h"

bool Game::guess(QChar letter) {
    if (secretWord.contains(letter))
        return true;
    errorCount++;
    return false;
}

void Game::updateDisplay(QChar letter) {
    QString newDisplay;
    newDisplay.reserve(secretWord.size()); //żeby nie było ciągłej alokacji pamięci
    for (int i = 0; i < currentDisplay.length(); i++) {
        newDisplay.append(letter == secretWord.at(i) ? letter : currentDisplay.at(i));
    }
    currentDisplay = std::move(newDisplay);
}
