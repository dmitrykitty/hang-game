#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows/difficultydialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(PageMenu);

    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::startGameClicked);
    connect(ui->buttonDifficulty, &QPushButton::clicked, this, &MainWindow::difficultyClicked);
    connect(ui->buttonSettings,   &QPushButton::clicked, this, &MainWindow::settingsClicked);
    connect(ui->buttonStatistics, &QPushButton::clicked, this, &MainWindow::statisticsClicked);
    connect(ui->buttonExit,       &QPushButton::clicked, this, &MainWindow::exitClicked);



    auto buttons = ui->keyboardWidget->findChildren<QPushButton*>();
    for (auto *btn : buttons) {
        // Получаем букву из надписи на кнопке
        QChar ch = btn->text().at(0).toUpper();
        connect(btn, &QPushButton::clicked, this, [this, ch, btn](){
            onLetterClicked(ch);
            btn->setEnabled(false);
        });
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::startGameClicked(){
    ui->stackedWidget->setCurrentIndex(PageGame);
}




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

void MainWindow::settingsClicked(){
    ui->stackedWidget->setCurrentIndex(PageSettings);
}


void MainWindow::exitClicked() {
    auto reply = QMessageBox::question(
        this,
        tr("Exit"),
        tr("Really quit?"),
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    }
    this->show();
}

void MainWindow::statisticsClicked() {
    ui->stackedWidget->setCurrentIndex(PageStatistisc);
}


void MainWindow::onLetterClicked(QChar ch) {
    //sprawdzenie wartosci
    // if (f(ch)){...}
    // else {...}
    // end
}
