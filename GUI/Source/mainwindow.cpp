#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows/difficultydialog.h"
#include <QMessageBox>
#include <QPushButton>
#include <QPixmap>


MainWindow::MainWindow(QWidget* parent): QMainWindow(parent), ui(new Ui::MainWindow), game(QStringLiteral("HANGMAN")) {
    ui->setupUi(this);
    ui->buttonBack->setVisible(false);

    ui->stackedWidget->setCurrentIndex(PageMenu);
    QPixmap pixMenu(":/img/GUI/Resources/img/mainWindowPNGImage.png");
    int w = ui->pictureMain->width();
    int h = ui->pictureMain->height();
    ui->pictureMain->setPixmap(pixMenu.scaled(w, h, Qt::KeepAspectRatio));

    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::startGameClicked);
    connect(ui->buttonDifficulty, &QPushButton::clicked, this, &MainWindow::difficultyClicked);
    connect(ui->buttonSettings, &QPushButton::clicked, this, &MainWindow::settingsClicked);
    connect(ui->buttonStatistics, &QPushButton::clicked, this, &MainWindow::statisticsClicked);
    connect(ui->buttonExit, &QPushButton::clicked, this, &MainWindow::exitClicked);

    connect(ui->buttonBack, &QPushButton::clicked, this, &MainWindow::backClicked);


    auto buttons = ui->keyboardWidget->findChildren<QPushButton *>();
    for (auto* btn: buttons) {
        // dostajemy char z PushButton
        QChar ch = btn->text().at(0).toUpper();
        connect(btn, &QPushButton::clicked, this, [this, ch, btn]() {
            onLetterClicked(ch);
            btn->setEnabled(false);
        });
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::startGameClicked() {
    ui->stackedWidget->setCurrentIndex(PageGame);
    QPixmap pixGame(":/img/GUI/Resources/img/GameImg0.png");
    int w = ui->pictureGame->width();
    int h = ui->pictureGame->height();
    ui->pictureGame->setPixmap(pixGame.scaled(w, h, Qt::KeepAspectRatio));
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

void MainWindow::settingsClicked() {
    ui->buttonBack->setVisible(true);
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

void MainWindow::backClicked() {
    ui->stackedWidget->setCurrentIndex(PageMenu);
    ui->buttonBack->setVisible(false);
}

void MainWindow::statisticsClicked() {
    ui->buttonBack->setVisible(true);
    ui->stackedWidget->setCurrentIndex(PageStatistisc);
}


void MainWindow::onLetterClicked(QChar ch) {
    if (game.guess(ch)) {
        game.updateDisplay(ch);
        if (game.isWon()) {
            int w = ui->pictureGame->width();
            int h = ui->pictureGame->height();
            ui->pictureGame->setPixmap(QPixmap(hangmanImages[sz - 1]).scaled(w, h, Qt::KeepAspectRatio));
        }
    }
    else
        updateGameImage();
}


void MainWindow::updateGameImage() {
    int errs = qBound(0, game.errors(), int(hangmanImages.size()));
    int w = ui->pictureGame->width();
    int h = ui->pictureGame->height();
    ui->pictureGame->setPixmap(QPixmap(hangmanImages[errs -1]).scaled(w, h, Qt::KeepAspectRatio));
}
