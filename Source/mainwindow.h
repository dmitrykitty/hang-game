#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void startGameClicked();
    void difficultyClicked();
    void settingsClicked();
    void statisticsClicked();
    void exitClicked();

    void onLetterClicked(QChar ch);


private:
    enum PageIndex {
        PageMenu = 0,
        PageGame = 1,
        PageStatistisc = 2,
        PageSettings = 3
    };

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
