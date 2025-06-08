#include "addcustomworddialog.h"
#include "ui_addcustomworddialog.h"
#include <QRegularExpression>

#include "DataBase/DataBaseManager.h"

AddCustomWordDialog::AddCustomWordDialog(QWidget* parent)
    : QDialog(parent)
      , ui(new Ui::AddCustomWordDialog) {
    ui->setupUi(this);
}

AddCustomWordDialog::~AddCustomWordDialog() {
    delete ui;
}

void AddCustomWordDialog::onWordChanged(const QString& text) {
    QString w = text.trimmed();

    if (w.length() < 4) {
        ui->labelWordError->setText("Min 4 letters");
        ui->labelWordError->setStyleSheet("color:red");
        ui->labelWordError->show();
        validWord = false;
    } else if (!QRegularExpression("^[A-Za-z_]+$").match(w).hasMatch()) {
        ui->labelWordError->setText("Only A–Z and _ allowed");
        ui->labelWordError->show();
        validWord = false;
    } else if (DataBaseManager::instance().wordExists(w)) {
        ui->labelWordError->setText("Word already exists");
        ui->labelWordError->show();
        validWord = false;
    } else {
        ui->labelWordError->hide();
        validWord = true;
    }
}

QString AddCustomWordDialog::word() const{
    return ui->labelWord->text().trimmed();
}