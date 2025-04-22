/********************************************************************************
** Form generated from reading UI file 'difficultydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTYDIALOG_H
#define UI_DIFFICULTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DifficultyDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonEasy;
    QPushButton *buttonMedium;
    QPushButton *buttonHard;

    void setupUi(QDialog *difficultyDialog)
    {
        if (difficultyDialog->objectName().isEmpty())
            difficultyDialog->setObjectName("difficultyDialog");
        difficultyDialog->resize(287, 253);
        verticalLayoutWidget = new QWidget(difficultyDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 27, 211, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonEasy = new QPushButton(verticalLayoutWidget);
        buttonEasy->setObjectName("buttonEasy");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonEasy->sizePolicy().hasHeightForWidth());
        buttonEasy->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(12);
        font.setBold(true);
        buttonEasy->setFont(font);

        verticalLayout->addWidget(buttonEasy);

        buttonMedium = new QPushButton(verticalLayoutWidget);
        buttonMedium->setObjectName("buttonMedium");
        sizePolicy.setHeightForWidth(buttonMedium->sizePolicy().hasHeightForWidth());
        buttonMedium->setSizePolicy(sizePolicy);
        buttonMedium->setFont(font);

        verticalLayout->addWidget(buttonMedium);

        buttonHard = new QPushButton(verticalLayoutWidget);
        buttonHard->setObjectName("buttonHard");
        sizePolicy.setHeightForWidth(buttonHard->sizePolicy().hasHeightForWidth());
        buttonHard->setSizePolicy(sizePolicy);
        buttonHard->setFont(font);

        verticalLayout->addWidget(buttonHard);


        retranslateUi(difficultyDialog);

        QMetaObject::connectSlotsByName(difficultyDialog);
    } // setupUi

    void retranslateUi(QDialog *difficultyDialog)
    {
        difficultyDialog->setWindowTitle(QCoreApplication::translate("DifficultyDialog", "Choose difficulty", nullptr));
        buttonEasy->setText(QCoreApplication::translate("DifficultyDialog", "EASY", nullptr));
        buttonMedium->setText(QCoreApplication::translate("DifficultyDialog", "MEDIUM", nullptr));
        buttonHard->setText(QCoreApplication::translate("DifficultyDialog", "HARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DifficultyDialog: public Ui_DifficultyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYDIALOG_H
