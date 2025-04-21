#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows/difficultydialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::startGameClicked);
    connect(ui->buttonDifficulty, &QPushButton::clicked, this, &MainWindow::difficultyClicked);
    connect(ui->buttonSettings,   &QPushButton::clicked, this, &MainWindow::settingsClicked);
    connect(ui->buttonStatistics, &QPushButton::clicked, this, &MainWindow::statisticsClicked);
    connect(ui->buttonExit,       &QPushButton::clicked, this, &MainWindow::exitClicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::startGameClicked(){}




void MainWindow::difficultyClicked() {
    DifficultyDialog dlg(this); // tworzymy lokalny dialog, przekazując this jako rodzica

    // uruchamiamy modalnie – funkcja blokuje mainwindow
    if (dlg.exec() == QDialog::Accepted) {
        // jak uzytkownic cos wybrał - exec() zwroci Accepted

        QString level = dlg.selectedDifficulty();

        //currentDifficulty = level;


        // QMessageBox::information(
        //     this,
        //     tr("Difficulty set"),
        //     tr("Chosen level: %1").arg(currentDifficulty)
        // );
    }
}

void MainWindow::settingsClicked(){}


void MainWindow::exitClicked() {
    auto reply = QMessageBox::question(
        this,
        tr("Exit Game"),
        tr("Are you sure you want to leave the game?"),
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
    this->show();
}

void MainWindow::statisticsClicked() {}
