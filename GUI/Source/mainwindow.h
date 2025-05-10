#pragma once

#include <QMainWindow>
#include <ui_mainwindow.h>

#include "GameLogic/Game.h"
#include "GameController/GameController.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
    Ui::MainWindow* ui;
    GameController controller_;
    QString currentDifficulty_ = "Easy";

    enum PageIndex {
        PageMenu = 0,
        PageGame = 1,
        PageStatistisc = 2,
        PageSettings = 3
    };

    const std::array<QString, 8> hangmanImages = {
        QStringLiteral(":/img/GUI/Resources/img/GameImg0.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameImg1.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameImg2.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameImg3.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameImg4.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameImg5.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameLoseImg.png"),
        QStringLiteral(":/img/GUI/Resources/img/GameWonImg.png")
    };

    const int sz = static_cast<int>(hangmanImages.size());

public:
    explicit MainWindow(QWidget* parent = nullptr);

    ~MainWindow() override;

private slots:
    //metody nacisku na buttons(wymagające connect)

    void startGameClicked();

    void difficultyClicked();

    void settingsClicked();

    void statisticsClicked();

    void exitClicked();

    void backClicked();

    void pauseClicked();

    void newGameClicked();

    void onLetterClicked(QChar ch);

    void updateGameImage(int errorCount);

    void updateGameLabel(const QString &newDisplay);

    void beginNewGame();

private:
    //game GUI update

    void showWonImage();

    void showLoseImage();

    void finishRound(bool won);
};


