#ifndef DIFFICULTYDIALOG_H
#define DIFFICULTYDIALOG_H

#include <QDialog>

namespace Ui {
    class DifficultyDialog;
}

class DifficultyDialog : public QDialog {
    Q_OBJECT

public:
    explicit DifficultyDialog(QWidget *parent = nullptr);
    QString selectedDifficulty() const { return choice;}

    ~DifficultyDialog() override;

private:
    Ui::DifficultyDialog *ui;
    QString choice = "Easy";

private slots:
    void easyClicked();

    void mediumClicked();

    void hardClicked();
};

#endif // DIFFICULTYDIALOG_H
