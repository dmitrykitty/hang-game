#include "GameController.h"
#include "DataBase/DataBaseManager.h"
#include <QDebug>

#include "GUI/Source/windows/difficultydialog.h"
#include "GUI/Source/windows/addcustomworddialog.h"

GameController::GameController(QObject *parent): QObject(parent){}

void GameController::startNewGame() {
    currentDifficulty_ = db_.getDifficulty();
    emit currentDifficultyChanged(currentDifficulty_);

    auto [newWord, newDefinition, id] = db_.getRandomWord(currentDifficulty_);

    if (newWord.isEmpty() || id < 0) {
        qWarning() << "No word found for difficulty" << currentDifficulty_;
        return;
    }
    currentWordId_ = id;
    game_ = Game();
    game_.setSecretWord(newWord);
    game_.setDefinition(newDefinition);

    emit displayUpdated(game_.getCurrentDisplay());
    emit descriptionUpdate(newDefinition);
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


    if (game_.isWon()) {
        emit gameWon();
        //db_.updateStats(currentWordId_, true);
    }
    if (game_.isLost()) {
        emit gameLost(game_.getSecretWord());
        //db_.updateStats(currentWordId_, false);
    }
}

void GameController::setCurrentDifficulty(const QString& diff) {
    currentDifficulty_ = diff;
}

void GameController::onSettingsDifficulty() {
    DifficultyDialog dlg;
    if (dlg.exec() == QDialog::Accepted) {
        QString diff = dlg.selectedDifficulty();
        // save to DB
        db_.setDifficulty(diff);
        currentDifficulty_ = diff;
        setCurrentDifficulty(diff);
    }
}

void GameController::onAddCustomWord() const {
    AddCustomWordDialog dlg{nullptr};
    if (dlg.exec() == QDialog::Accepted) {
        QString w  = dlg.word();
        QString def = dlg.definition();
        QString diff = dlg.difficulty();

        if (!db_.addUserWord(w, def, diff)) {
            qWarning() << "Failed to insert custom word";
        }
    }
}

void GameController::removeAllUserWords() {
    bool ok = db_.deleteAllUserWords();
    emit userWordsRemoved(ok);
}
