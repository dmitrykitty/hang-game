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

    ui->pushButtonAdd->setEnabled(false);
}

AddCustomWordDialog::~AddCustomWordDialog() {
    delete ui;
}

QString AddCustomWordDialog::difficulty() const {
    if (ui->radioButtonEasy->isChecked())
        return "easy";
    if (ui->radioButtonMedium->isChecked())
        return "medium";
    return "hard";
}

QString AddCustomWordDialog::definition() const {
    return ui->labelDefinition->text().trimmed();
}


QString AddCustomWordDialog::word() const {
    return ui->labelWord->text().trimmed();
}

bool AddCustomWordDialog::validateAll() const {
    return validDefinition && validWord;
}


void AddCustomWordDialog::onWordChanged(const QString& text) {
    QString w = text.trimmed();

    if (w.length() < 4 or w.length() > 16) {
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
    ui->pushButtonAdd->setEnabled(validateAll());
}

void AddCustomWordDialog::onDefinitionChanged() {
    QString def = ui->plainTextEditDefinition->toPlainText().trimmed();
    if (def.length() < 15) {
        ui->labelDefinitionError->setText("Min 15 characters");
        ui->labelDefinitionError->setStyleSheet("color:red");
        ui->labelDefinitionError->show();
        validDefinition = false;
    } else {
        ui->labelDefinitionError->setText(" ");
        validDefinition = true;
    }
    ui->pushButtonAdd->setEnabled(validateAll());
}
