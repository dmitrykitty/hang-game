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

QT_BEGIN_NAMESPACE

class Ui_difficultyDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonEasy;
    QPushButton *buttonMedium;
    QPushButton *buttonHard;

    void setupUi(QDialog *difficultyDialog)
    {
        if (difficultyDialog->objectName().isEmpty())
            difficultyDialog->setObjectName("difficultyDialog");
        difficultyDialog->resize(360, 360);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(difficultyDialog->sizePolicy().hasHeightForWidth());
        difficultyDialog->setSizePolicy(sizePolicy);
        difficultyDialog->setMinimumSize(QSize(360, 360));
        difficultyDialog->setMaximumSize(QSize(360, 360));
        verticalLayout_2 = new QVBoxLayout(difficultyDialog);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        buttonEasy = new QPushButton(difficultyDialog);
        buttonEasy->setObjectName("buttonEasy");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonEasy->sizePolicy().hasHeightForWidth());
        buttonEasy->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(12);
        font.setBold(true);
        buttonEasy->setFont(font);

        verticalLayout->addWidget(buttonEasy);

        buttonMedium = new QPushButton(difficultyDialog);
        buttonMedium->setObjectName("buttonMedium");
        sizePolicy1.setHeightForWidth(buttonMedium->sizePolicy().hasHeightForWidth());
        buttonMedium->setSizePolicy(sizePolicy1);
        buttonMedium->setFont(font);
        buttonMedium->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(buttonMedium);

        buttonHard = new QPushButton(difficultyDialog);
        buttonHard->setObjectName("buttonHard");
        sizePolicy1.setHeightForWidth(buttonHard->sizePolicy().hasHeightForWidth());
        buttonHard->setSizePolicy(sizePolicy1);
        buttonHard->setFont(font);

        verticalLayout->addWidget(buttonHard);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(difficultyDialog);

        QMetaObject::connectSlotsByName(difficultyDialog);
    } // setupUi

    void retranslateUi(QDialog *difficultyDialog)
    {
        difficultyDialog->setWindowTitle(QCoreApplication::translate("difficultyDialog", "Choose difficulty", nullptr));
        buttonEasy->setText(QCoreApplication::translate("difficultyDialog", "EASY", nullptr));
        buttonMedium->setText(QCoreApplication::translate("difficultyDialog", "MEDIUM", nullptr));
        buttonHard->setText(QCoreApplication::translate("difficultyDialog", "HARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class difficultyDialog: public Ui_difficultyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYDIALOG_H
