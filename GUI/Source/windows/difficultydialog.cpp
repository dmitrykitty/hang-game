#include "difficultydialog.h"
#include "difficultydialog.h"
#include "ui_difficultydialog.h"

DifficultyDialog::DifficultyDialog(QWidget *parent): QDialog(parent), ui(new Ui::difficultyDialog) {
    ui->setupUi(this);
    connect(ui->buttonEasy, &QPushButton::clicked, this, &DifficultyDialog::easyClicked);
    connect(ui->buttonMedium, &QPushButton::clicked, this, &DifficultyDialog::mediumClicked);
    connect(ui->buttonHard, &QPushButton::clicked, this, &DifficultyDialog::hardClicked);
}

DifficultyDialog::~DifficultyDialog() {
    delete ui;
}

void DifficultyDialog::easyClicked() {
    choice = "easy";
    accept();
}

void DifficultyDialog::mediumClicked() {
    choice = "medium";
    accept();
}

void DifficultyDialog::hardClicked() {
    choice = "hard";
    accept();
}
