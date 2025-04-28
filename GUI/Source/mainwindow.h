#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ui_mainwindow.h>

#include "GameLogic/Game.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
    Ui::MainWindow* ui;
    Game game;

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

    void onLetterClicked(QChar ch);

private:
    //game GUI update

    void updateGameImage();

    void updateGameLabel();

    void showWonImage();

    void showLoseImage();
};

#endif // MAINWINDOW_H
