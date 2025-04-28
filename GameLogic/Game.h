//
// Created by Lenovo on 27/04/2025.
//

#ifndef GAME_H
#define GAME_H
#include <qstring.h>

#include <utility>


class Game {
    static constexpr int ERRORMAX = 7;

    QString secretWord = "";
    QString currentDisplay = "";
    int errorCount{};

public:
    //Constructors
    Game() = default;
    explicit Game(QString word): secretWord(std::move(word)), currentDisplay(secretWord.size(), QChar('_')) {}

    //Getters
    [[nodiscard]] int errors() const { return errorCount; }
    QString& getCurrentDisplay() { return currentDisplay; }

    //Setters
    void setSecretWord(const QString& word);

    //Update the Game
    [[nodiscard]] bool guess(QChar letter);
    void updateDisplay(QChar letter);

    //GameResult
    [[nodiscard]] bool isWon() const;
    [[nodiscard]] bool isLost() const;
};


#endif //GAME_H
