#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "GameLogic/Game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:


    void startGameClicked();
    void difficultyClicked();
    void settingsClicked();
    void statisticsClicked();
    void exitClicked();

    void backClicked();

    void onLetterClicked(QChar ch);


private:
    enum PageIndex {
        PageMenu = 0,
        PageGame = 1,
        PageStatistisc = 2,
        PageSettings = 3
    };

    Ui::MainWindow *ui;
    Game game;
};

#endif // MAINWINDOW_H
