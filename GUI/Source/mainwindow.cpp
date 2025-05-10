#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows/difficultydialog.h"
#include <QMessageBox>
#include <QPushButton>
#include <QPixmap>


MainWindow::MainWindow(QWidget* parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->buttonBack->setVisible(false);
    ui->buttonPause->setVisible(false);

    ui->stackedWidget->setCurrentIndex(PageMenu);

    QPixmap pixMenu(":/img/GUI/Resources/img/mainWindowPNGImage.png");
    ui->pictureMain->setPixmap(pixMenu.scaled(ui->pictureMain->size(), Qt::KeepAspectRatio));

    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::startGameClicked);
    connect(ui->buttonDifficulty, &QPushButton::clicked, this, &MainWindow::difficultyClicked);
    connect(ui->buttonSettings, &QPushButton::clicked, this, &MainWindow::settingsClicked);
    connect(ui->buttonStatistics, &QPushButton::clicked, this, &MainWindow::statisticsClicked);
    connect(ui->buttonExit, &QPushButton::clicked, this, &MainWindow::exitClicked);
    connect(ui->buttonBack, &QPushButton::clicked, this, &MainWindow::backClicked);
    connect(ui->buttonPause, &QPushButton::clicked, this, &MainWindow::pauseClicked);

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
    ui->buttonPause->setVisible(true);

    //ustawienie słowa z DB w przyszłości
    QString word = "CLASS";
    game.setSecretWord(word);
    updateGameImage();
    updateGameLabel();
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

void MainWindow::pauseClicked() {
    auto reply = QMessageBox::question(
        this,
        tr("BackToMenu"),
        tr("Are you sure you want to got to menu?"),
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        ui->buttonPause->setVisible(false);
        ui->stackedWidget->setCurrentIndex(PageMenu);
    }
    this->show();
}

void MainWindow::statisticsClicked() {
    ui->buttonBack->setVisible(true);
    ui->stackedWidget->setCurrentIndex(PageStatistisc);
}

void MainWindow::showWonImage() {
    ui->pictureGame->setPixmap(
        QPixmap(hangmanImages[sz - 1]).scaled(
            ui->pictureGame->size(), Qt::KeepAspectRatio
        )
    );
}

void MainWindow::showLoseImage() {
    ui->pictureGame->setPixmap(
        QPixmap(hangmanImages[sz - 2]).scaled(
            ui->pictureGame->size(), Qt::KeepAspectRatio
        )
    );
}


void MainWindow::onLetterClicked(QChar ch) {
    if (game.guess(ch)) {
        game.updateDisplay(ch);
        updateGameLabel();
        if (game.isWon()){
            ui->keyboardWidget->setEnabled(false);
            showWonImage();
        }
    } else {
        if (game.isLost()){
            ui->keyboardWidget->setEnabled(false);
            ui->buttonPause->setEnabled(false);
            showLoseImage();
        }
        else
            updateGameImage();
    }
}


void MainWindow::updateGameImage() {
    int errs = qBound(0, game.errors(), int(hangmanImages.size()));
    ui->pictureGame->setPixmap(QPixmap(hangmanImages[errs]).scaled(
        ui->pictureGame->size(), Qt::KeepAspectRatio));
}

void MainWindow::updateGameLabel() {
    ui->labelWordMask->setText(game.getCurrentDisplay());
}

void MainWindow::resetGame() {
    game = Game();
    QString word = "VECTOR";
    game.setSecretWord(word);
    for (auto *btn : ui->keyboardWidget->findChildren<QPushButton*>()) {
        btn->setEnabled(true);
    }
    updateGameImage();
    updateGameLabel();
    ui->keyboardWidget->setEnabled(true);
}
