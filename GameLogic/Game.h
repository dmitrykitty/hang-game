#pragma once

#include <qstring.h>
#include <utility>

class Game {
    static constexpr int ERRORMAX = 6;

    QString secretWord;
    QString currentDisplay;
    int errorCount{};

public:
    //Constructors
    Game() = default;

    explicit Game(QString word): secretWord(std::move(word)) {}

    //Getters
    [[nodiscard]] int errors() const { return errorCount; }
    QString& getCurrentDisplay() { return currentDisplay; }
    [[nodiscard]] QString getSecretWord() const { return secretWord; }

    //Setters
    void setSecretWord(const QString& word);

    //Update the Game
    [[nodiscard]] bool guess(QChar letter);

    void updateDisplay(QChar letter);

    //GameResult
    [[nodiscard]] bool isWon() const;

    [[nodiscard]] bool isLost() const;
};
