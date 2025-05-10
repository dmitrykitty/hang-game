#include "GameController.h"

GameController::GameController(QObject *parent): QObject(parent), game_(){}

void GameController::startNewGame(const QString &difficulty) {
    currentDifficulty_ = difficulty;
}