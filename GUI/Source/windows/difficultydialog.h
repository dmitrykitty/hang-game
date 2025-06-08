#ifndef DIFFICULTYDIALOG_H
#define DIFFICULTYDIALOG_H

#include <QDialog>

namespace Ui {
    class difficultyDialog;
}

class DifficultyDialog : public QDialog {
    Q_OBJECT

public:
    explicit DifficultyDialog(QWidget *parent = nullptr);
    [[nodiscard]] QString selectedDifficulty() const { return choice;}

    ~DifficultyDialog() override;

private:
    Ui::difficultyDialog *ui;
    QString choice = "easy";

private slots:
    void easyClicked();

    void mediumClicked();

    void hardClicked();
};

#endif // DIFFICULTYDIALOG_H
