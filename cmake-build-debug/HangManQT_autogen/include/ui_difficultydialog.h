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

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(287, 253);
        verticalLayoutWidget = new QWidget(Dialog);
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

        verticalLayout->addWidget(buttonEasy);

        buttonMedium = new QPushButton(verticalLayoutWidget);
        buttonMedium->setObjectName("buttonMedium");
        sizePolicy.setHeightForWidth(buttonMedium->sizePolicy().hasHeightForWidth());
        buttonMedium->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonMedium);

        buttonHard = new QPushButton(verticalLayoutWidget);
        buttonHard->setObjectName("buttonHard");
        sizePolicy.setHeightForWidth(buttonHard->sizePolicy().hasHeightForWidth());
        buttonHard->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonHard);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("DifficultyDialog", "Dialog", nullptr));
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
