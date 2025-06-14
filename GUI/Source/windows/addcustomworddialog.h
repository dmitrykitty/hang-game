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

    [[nodiscard]] QString word() const;
    QString definition() const;
    QString difficulty() const;

private slots:
    void onWordChanged(const QString& text);
    void onDefinitionChanged();
    void onDifficultyChanged();
    bool validateAll() const;

private:
    Ui::AddCustomWordDialog* ui;

    bool validWord = false;
    bool validDefinition = false;
    bool uniqueWord = false;
};
