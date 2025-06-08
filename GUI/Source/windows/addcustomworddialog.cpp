#include "addcustomworddialog.h"
#include <QDialogButtonBox>
#include "ui_addcustomworddialog.h"
#include <QRegularExpressionValidator>
#include "DataBase/DataBaseManager.h"


AddCustomWordDialog::AddCustomWordDialog(QWidget* parent)
    : QDialog(parent)
      , ui(new Ui::AddCustomWordDialog) {
    ui->setupUi(this);
    ui->groupBox->setStyleSheet("QGroupBox { border: none; }");

    // auto re = QRegularExpression("^[A-Za-z_]+$");
    // ui->lineEditWord->setValidator(new QRegularExpressionValidator(re, this));

    connect(ui->lineEditWord, &QLineEdit::textChanged,
           this, &AddCustomWordDialog::onWordChanged);

}

AddCustomWordDialog::~AddCustomWordDialog() {
    delete ui;
}

void AddCustomWordDialog::onWordChanged(const QString& text) {
    QString w = text.trimmed();

    if (w.length() < 4 or w.length() > 16 ) {
        ui->labelWordError->setText("Word length from 4 to 16 letters");
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
        ui->labelWordError->setText(" ");
        validWord = true;
    }
}

QString AddCustomWordDialog::word() const{
    return ui->labelWord->text().trimmed();
}