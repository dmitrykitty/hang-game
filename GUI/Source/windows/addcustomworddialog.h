#pragma once

#include <QDialog>

namespace Ui {
    class AddCustomWordDialog;
}

class AddCustomWordDialog : public QDialog {
    Q_OBJECT

public:
    explicit AddCustomWordDialog(QWidget* parent = nullptr);

    ~AddCustomWordDialog() override;

    QString word() const;

private slots:
    void onWordChanged(const QString& text);

private:
    Ui::AddCustomWordDialog* ui;

    bool validWord = false;
    bool validDefinition = false;
    bool uniqueWord = false;
};
