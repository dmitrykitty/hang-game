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
    //ui->buttonShowDefinition->setHidden(true);
    ui->buttonBackToMenu->setHidden(true);
    ui->buttonNewGame->setHidden(true);
    QPixmap pixMenu(":/img/GUI/Resources/img/mainWindowPNGImage.png");
    ui->pictureMain->setPixmap(pixMenu.scaled(ui->pictureMain->size(), Qt::KeepAspectRatio));

    connect(ui->buttonStart, &QPushButton::clicked, this, &MainWindow::beginNewGame);
    connect(ui->buttonNewGame, &QPushButton::clicked, this, &MainWindow::beginNewGame);

    connect(&controller_, &GameController::displayUpdated,
            this, &MainWindow::updateGameLabel);
    connect(&controller_, &GameController::descriptionUpdate,
            this, &MainWindow::updateDescriptionLabel);
    connect(&controller_, &GameController::imageUpdated,
            this, &MainWindow::updateGameImage);
    connect(&controller_, &GameController::gameWon, this, [this]() {
        finishRound(true);
    });
    connect(&controller_, &GameController::gameLost,
            this, &MainWindow::onGameLost);
    connect(&controller_, &GameController::attemptsLeft,
            this, &MainWindow::updateAttemptsLabel);

    connect(&controller_, &GameController::currentDifficultyChanged,
            this, &MainWindow::updateDifficultyLabel);



    connect(ui->buttonDifficulty, &QPushButton::clicked, this, &MainWindow::difficultyClicked);
    connect(ui->buttonAddWord, &QPushButton::clicked, this, &MainWindow::addWordClicked);
    connect(ui->buttonSettings, &QPushButton::clicked, this, &MainWindow::settingsClicked);
    connect(ui->buttonStatistics, &QPushButton::clicked, this, &MainWindow::statisticsClicked);
    connect(ui->buttonExit, &QPushButton::clicked, this, &MainWindow::exitClicked);
    connect(ui->buttonBack, &QPushButton::clicked, this, &MainWindow::backClicked);
    connect(ui->buttonPause, &QPushButton::clicked, this, &MainWindow::pauseClicked);
    connect(ui->buttonBackToMenu, &QPushButton::clicked, this, &MainWindow::backClicked);
    connect(ui->buttonShowDefinition, &QPushButton::clicked, this, &MainWindow::showDefinitionClicked);

    connect(this, &MainWindow::changeDifficultyRequested,
            &controller_, &GameController::onSettingsDifficulty);

    connect(this, &MainWindow::addWordRequested,
        &controller_, &GameController::onAddCustomWord);

    auto buttons = ui->keyboardWidget->findChildren<QPushButton *>();
    for (auto* btn: buttons) {
        // dostajemy char z PushButton
        QChar ch = btn->text().at(0).toUpper();
        connect(btn, &QPushButton::clicked, this, [this, ch, btn]() {
            controller_.guessLetter(ch);
            btn->setEnabled(false);
        });
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::startGameClicked() {
    beginNewGame();
}


void MainWindow::difficultyClicked() {
    emit changeDifficultyRequested();
}

void MainWindow::addWordClicked() {
    emit addWordRequested();
}

void MainWindow::settingsClicked() const {
    ui->buttonBack->setVisible(true);
    ui->stackedWidget->setCurrentIndex(PageSettings);
}

void MainWindow::showDefinitionClicked() const {
    ui->buttonShowDefinition->setEnabled(false);
    ui->labelDefinition->setVisible(true);
}

void MainWindow::updateDescriptionLabel(const QString& newDescription) const {
    ui->labelDefinition->setText(newDescription);
}

void MainWindow::onGameLost(const QString& secretWord) const {
    finishRound(false);
    ui->labelWordMask->setText(secretWord);
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

void MainWindow::backClicked() const {
    ui->stackedWidget->setCurrentIndex(PageMenu);
    ui->buttonBack->setVisible(false);
}

void MainWindow::newGameClicked() {
    beginNewGame();
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

void MainWindow::statisticsClicked() const {
    ui->buttonBack->setVisible(true);
    ui->stackedWidget->setCurrentIndex(PageStatistisc);
}

void MainWindow::showWonImage() const {
    ui->pictureGame->setPixmap(
        QPixmap(hangmanImages[sz - 1]).scaled(
            ui->pictureGame->size(), Qt::KeepAspectRatio
        )
    );
}

void MainWindow::showLoseImage() const {
    ui->pictureGame->setPixmap(
        QPixmap(hangmanImages[sz - 2]).scaled(
            ui->pictureGame->size(), Qt::KeepAspectRatio
        )
    );
}


void MainWindow::onLetterClicked(QChar ch) {
    controller_.guessLetter(ch);
}

void MainWindow::finishRound(bool won) const {
    ui->keyboardWidget->setEnabled(false);
    ui->buttonPause->setVisible(false);
    ui->buttonBackToMenu->setVisible(true);
    ui->buttonNewGame->setVisible(true);

    if (won)
        showWonImage();
    else {
        showLoseImage();
    }
}


void MainWindow::updateGameImage(int errorCount) const {
    int maxIdx = int(hangmanImages.size()) - 1;
    int errs = std::clamp(errorCount, 0, maxIdx);

    ui->pictureGame->setPixmap(
        QPixmap(hangmanImages[errs])
        .scaled(ui->pictureGame->size(), Qt::KeepAspectRatio)
    );
}

void MainWindow::updateGameLabel(const QString& newDisplay) const {
    ui->labelWordMask->setText(newDisplay);
}


void MainWindow::beginNewGame() {
    ui->stackedWidget->setCurrentIndex(PageGame);
    ui->buttonShowDefinition->setEnabled(true);
    ui->buttonPause->setVisible(true);
    ui->buttonBackToMenu->setVisible(false);
    ui->buttonNewGame->setVisible(false);
    ui->labelDefinition->setVisible(false);

    controller_.startNewGame();

    ui->keyboardWidget->setEnabled(true);
    for (auto* btn: ui->keyboardWidget->findChildren<QPushButton *>())
        btn->setEnabled(true);
}

void MainWindow::updateAttemptsLabel(int remaining) const {
    ui->labelAttemptsLeft->setText(tr("ATTEMPTS LEFT: ") + QString::number(remaining));
}

void MainWindow::updateDifficultyLabel() const {
    ui->labelCurrentDifficulty->setText(tr("CURRENT DIFFICULTY: ") + controller_.getCurrentDifficulty().toUpper());
}
