#pragma once

#include <qstring.h>
#include <utility>

class Game {

    static constexpr int ERRORMAX = 6;
    QString secretWord_;
    QString definition_;
    QString currentDisplay_;
    int errorCount_{};

public:

    //Constructors
    Game() = default;

    explicit Game(QString word): secretWord_(std::move(word)) {}

    //Getters
    static constexpr int getMaxError() { return ERRORMAX; }
    [[nodiscard]] int errors() const { return errorCount_; }
    QString& getCurrentDisplay() { return currentDisplay_; }
    [[nodiscard]] QString getSecretWord() const;
    [[nodiscard]] QString getDefinitionWord() const;

    //Setters
    void setSecretWord(const QString& word);
    void setDefinition(const QString& def);

    //Update the Game
    [[nodiscard]] bool guess(QChar letter);


    void updateDisplay(QChar letter);

    //GameResult
    [[nodiscard]] bool isWon() const;

    [[nodiscard]] bool isLost() const;
};
