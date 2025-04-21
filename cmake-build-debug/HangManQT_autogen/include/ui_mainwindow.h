/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonStart;
    QPushButton *buttonDifficulty;
    QPushButton *buttonSettings;
    QPushButton *buttonStatistics;
    QPushButton *buttonExit;
    QMenuBar *menubar;
    QMenu *menuhangman;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(473, 704);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(100, 100, 100, 100);
        buttonStart = new QPushButton(centralwidget);
        buttonStart->setObjectName("buttonStart");
        buttonStart->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonStart->sizePolicy().hasHeightForWidth());
        buttonStart->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(buttonStart);

        buttonDifficulty = new QPushButton(centralwidget);
        buttonDifficulty->setObjectName("buttonDifficulty");
        buttonDifficulty->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonDifficulty->sizePolicy().hasHeightForWidth());
        buttonDifficulty->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(buttonDifficulty);

        buttonSettings = new QPushButton(centralwidget);
        buttonSettings->setObjectName("buttonSettings");
        buttonSettings->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonSettings->sizePolicy().hasHeightForWidth());
        buttonSettings->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(buttonSettings);

        buttonStatistics = new QPushButton(centralwidget);
        buttonStatistics->setObjectName("buttonStatistics");
        buttonStatistics->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonStatistics->sizePolicy().hasHeightForWidth());
        buttonStatistics->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(buttonStatistics);

        buttonExit = new QPushButton(centralwidget);
        buttonExit->setObjectName("buttonExit");
        buttonExit->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(buttonExit);


        verticalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 473, 21));
        menuhangman = new QMenu(menubar);
        menuhangman->setObjectName("menuhangman");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuhangman->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(buttonExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonStart->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        buttonDifficulty->setText(QCoreApplication::translate("MainWindow", "DIFFICULTY", nullptr));
        buttonSettings->setText(QCoreApplication::translate("MainWindow", "SETTINGS", nullptr));
        buttonStatistics->setText(QCoreApplication::translate("MainWindow", "STATISTICS", nullptr));
        buttonExit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        menuhangman->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
