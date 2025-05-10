#pragma once

#include <qstring.h>
#include <utility>

class Game {
    static constexpr int ERRORMAX = 6;

    QString secretWord;
    QString currentDisplay;
    int errorCount{};

    void updateDisplay(QChar letter);

public:
    //Constructors
    Game() = default;
    explicit Game(QString  word): secretWord(std::move(word)) {}

    //Getters
    [[nodiscard]] int errors() const { return errorCount; }
    QString& getCurrentDisplay() { return currentDisplay; }

    //Setters
    void setSecretWord(const QString& word);

    //Update the Game
    [[nodiscard]] bool guess(QChar letter);


    //GameResult
    [[nodiscard]] bool isWon() const;
    [[nodiscard]] bool isLost() const;
};
