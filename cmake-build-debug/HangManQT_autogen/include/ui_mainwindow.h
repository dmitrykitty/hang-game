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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageMenu;
    QLabel *pictureMain;
    QWidget *buttonsWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonStart;
    QPushButton *buttonSettings;
    QPushButton *buttonStatistics;
    QPushButton *buttonExit;
    QWidget *pageGame;
    QVBoxLayout *verticalLayout_7;
    QLabel *pictureGame;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelWordMask;
    QSpacerItem *verticalSpacer;
    QWidget *keyboardWidget;
    QGridLayout *gridLayout_3;
    QPushButton *buttonO;
    QPushButton *buttonW;
    QPushButton *buttonF;
    QPushButton *buttonN;
    QPushButton *buttonH;
    QPushButton *buttonM;
    QPushButton *buttonC;
    QPushButton *buttonI;
    QPushButton *buttonJ;
    QPushButton *buttonL;
    QPushButton *buttonE;
    QPushButton *buttonU;
    QPushButton *buttonB;
    QPushButton *buttonK;
    QPushButton *buttonQ;
    QPushButton *buttonS;
    QPushButton *buttonT;
    QPushButton *buttonG;
    QPushButton *buttonP;
    QPushButton *buttonX;
    QPushButton *buttonR;
    QPushButton *buttonV;
    QPushButton *buttonZ;
    QPushButton *buttonD;
    QPushButton *buttonY;
    QPushButton *buttonA;
    QWidget *pageStatistics;
    QLabel *label_2;
    QWidget *pageSettings;
    QLabel *label_3;
    QPushButton *buttonDifficulty;
    QPushButton *buttonBack;
    QMenuBar *menubar;
    QMenu *menuhangman;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(826, 864);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(480, 720));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageMenu = new QWidget();
        pageMenu->setObjectName("pageMenu");
        pageMenu->setEnabled(true);
        sizePolicy1.setHeightForWidth(pageMenu->sizePolicy().hasHeightForWidth());
        pageMenu->setSizePolicy(sizePolicy1);
        pictureMain = new QLabel(pageMenu);
        pictureMain->setObjectName("pictureMain");
        pictureMain->setEnabled(true);
        pictureMain->setGeometry(QRect(180, -40, 421, 401));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(pictureMain->sizePolicy().hasHeightForWidth());
        pictureMain->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(48);
        font.setBold(true);
        pictureMain->setFont(font);
        pictureMain->setToolTipDuration(-1);
        buttonsWidget = new QWidget(pageMenu);
        buttonsWidget->setObjectName("buttonsWidget");
        buttonsWidget->setGeometry(QRect(0, 180, 781, 571));
        sizePolicy1.setHeightForWidth(buttonsWidget->sizePolicy().hasHeightForWidth());
        buttonsWidget->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(buttonsWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 190, 671, 351));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(200, 0, 200, 0);
        buttonStart = new QPushButton(layoutWidget);
        buttonStart->setObjectName("buttonStart");
        buttonStart->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonStart->sizePolicy().hasHeightForWidth());
        buttonStart->setSizePolicy(sizePolicy1);
        buttonStart->setMinimumSize(QSize(240, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(16);
        font1.setBold(true);
        buttonStart->setFont(font1);

        verticalLayout_2->addWidget(buttonStart);

        buttonSettings = new QPushButton(layoutWidget);
        buttonSettings->setObjectName("buttonSettings");
        buttonSettings->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonSettings->sizePolicy().hasHeightForWidth());
        buttonSettings->setSizePolicy(sizePolicy1);
        buttonSettings->setMinimumSize(QSize(240, 0));
        buttonSettings->setFont(font1);

        verticalLayout_2->addWidget(buttonSettings);

        buttonStatistics = new QPushButton(layoutWidget);
        buttonStatistics->setObjectName("buttonStatistics");
        buttonStatistics->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonStatistics->sizePolicy().hasHeightForWidth());
        buttonStatistics->setSizePolicy(sizePolicy1);
        buttonStatistics->setMinimumSize(QSize(240, 0));
        buttonStatistics->setFont(font1);

        verticalLayout_2->addWidget(buttonStatistics);

        buttonExit = new QPushButton(layoutWidget);
        buttonExit->setObjectName("buttonExit");
        buttonExit->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy1);
        buttonExit->setMinimumSize(QSize(240, 0));
        buttonExit->setFont(font1);
        buttonExit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));

        verticalLayout_2->addWidget(buttonExit);

        stackedWidget->addWidget(pageMenu);
        pageGame = new QWidget();
        pageGame->setObjectName("pageGame");
        verticalLayout_7 = new QVBoxLayout(pageGame);
        verticalLayout_7->setObjectName("verticalLayout_7");
        pictureGame = new QLabel(pageGame);
        pictureGame->setObjectName("pictureGame");
        pictureGame->setMaximumSize(QSize(484, 484));

        verticalLayout_7->addWidget(pictureGame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        labelWordMask = new QLabel(pageGame);
        labelWordMask->setObjectName("labelWordMask");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(48);
        font2.setBold(false);
        labelWordMask->setFont(font2);
        labelWordMask->setScaledContents(false);

        verticalLayout_7->addWidget(labelWordMask, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        keyboardWidget = new QWidget(pageGame);
        keyboardWidget->setObjectName("keyboardWidget");
        gridLayout_3 = new QGridLayout(keyboardWidget);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName("gridLayout_3");
        buttonO = new QPushButton(keyboardWidget);
        buttonO->setObjectName("buttonO");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonO->sizePolicy().hasHeightForWidth());
        buttonO->setSizePolicy(sizePolicy3);
        buttonO->setMinimumSize(QSize(15, 15));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font3.setPointSize(16);
        buttonO->setFont(font3);

        gridLayout_3->addWidget(buttonO, 4, 5, 1, 1);

        buttonW = new QPushButton(keyboardWidget);
        buttonW->setObjectName("buttonW");
        sizePolicy3.setHeightForWidth(buttonW->sizePolicy().hasHeightForWidth());
        buttonW->setSizePolicy(sizePolicy3);
        buttonW->setMinimumSize(QSize(15, 15));
        buttonW->setFont(font3);

        gridLayout_3->addWidget(buttonW, 5, 4, 1, 1);

        buttonF = new QPushButton(keyboardWidget);
        buttonF->setObjectName("buttonF");
        sizePolicy3.setHeightForWidth(buttonF->sizePolicy().hasHeightForWidth());
        buttonF->setSizePolicy(sizePolicy3);
        buttonF->setMinimumSize(QSize(15, 15));
        buttonF->setFont(font3);

        gridLayout_3->addWidget(buttonF, 2, 5, 1, 1);

        buttonN = new QPushButton(keyboardWidget);
        buttonN->setObjectName("buttonN");
        sizePolicy3.setHeightForWidth(buttonN->sizePolicy().hasHeightForWidth());
        buttonN->setSizePolicy(sizePolicy3);
        buttonN->setMinimumSize(QSize(15, 15));
        buttonN->setFont(font3);

        gridLayout_3->addWidget(buttonN, 4, 4, 1, 1);

        buttonH = new QPushButton(keyboardWidget);
        buttonH->setObjectName("buttonH");
        sizePolicy3.setHeightForWidth(buttonH->sizePolicy().hasHeightForWidth());
        buttonH->setSizePolicy(sizePolicy3);
        buttonH->setMinimumSize(QSize(15, 15));
        buttonH->setFont(font3);

        gridLayout_3->addWidget(buttonH, 2, 7, 1, 1);

        buttonM = new QPushButton(keyboardWidget);
        buttonM->setObjectName("buttonM");
        sizePolicy3.setHeightForWidth(buttonM->sizePolicy().hasHeightForWidth());
        buttonM->setSizePolicy(sizePolicy3);
        buttonM->setMinimumSize(QSize(15, 15));
        buttonM->setFont(font3);

        gridLayout_3->addWidget(buttonM, 4, 3, 1, 1);

        buttonC = new QPushButton(keyboardWidget);
        buttonC->setObjectName("buttonC");
        sizePolicy3.setHeightForWidth(buttonC->sizePolicy().hasHeightForWidth());
        buttonC->setSizePolicy(sizePolicy3);
        buttonC->setMinimumSize(QSize(15, 15));
        buttonC->setFont(font3);

        gridLayout_3->addWidget(buttonC, 2, 2, 1, 1);

        buttonI = new QPushButton(keyboardWidget);
        buttonI->setObjectName("buttonI");
        sizePolicy3.setHeightForWidth(buttonI->sizePolicy().hasHeightForWidth());
        buttonI->setSizePolicy(sizePolicy3);
        buttonI->setMinimumSize(QSize(15, 15));
        buttonI->setFont(font3);

        gridLayout_3->addWidget(buttonI, 2, 8, 1, 1);

        buttonJ = new QPushButton(keyboardWidget);
        buttonJ->setObjectName("buttonJ");
        sizePolicy3.setHeightForWidth(buttonJ->sizePolicy().hasHeightForWidth());
        buttonJ->setSizePolicy(sizePolicy3);
        buttonJ->setMinimumSize(QSize(15, 15));
        buttonJ->setFont(font3);

        gridLayout_3->addWidget(buttonJ, 4, 0, 1, 1);

        buttonL = new QPushButton(keyboardWidget);
        buttonL->setObjectName("buttonL");
        sizePolicy3.setHeightForWidth(buttonL->sizePolicy().hasHeightForWidth());
        buttonL->setSizePolicy(sizePolicy3);
        buttonL->setMinimumSize(QSize(15, 15));
        buttonL->setFont(font3);

        gridLayout_3->addWidget(buttonL, 4, 2, 1, 1);

        buttonE = new QPushButton(keyboardWidget);
        buttonE->setObjectName("buttonE");
        sizePolicy3.setHeightForWidth(buttonE->sizePolicy().hasHeightForWidth());
        buttonE->setSizePolicy(sizePolicy3);
        buttonE->setMinimumSize(QSize(15, 15));
        buttonE->setFont(font3);

        gridLayout_3->addWidget(buttonE, 2, 4, 1, 1);

        buttonU = new QPushButton(keyboardWidget);
        buttonU->setObjectName("buttonU");
        sizePolicy3.setHeightForWidth(buttonU->sizePolicy().hasHeightForWidth());
        buttonU->setSizePolicy(sizePolicy3);
        buttonU->setMinimumSize(QSize(15, 15));
        buttonU->setFont(font3);

        gridLayout_3->addWidget(buttonU, 5, 2, 1, 1);

        buttonB = new QPushButton(keyboardWidget);
        buttonB->setObjectName("buttonB");
        sizePolicy3.setHeightForWidth(buttonB->sizePolicy().hasHeightForWidth());
        buttonB->setSizePolicy(sizePolicy3);
        buttonB->setMinimumSize(QSize(15, 15));
        buttonB->setFont(font3);

        gridLayout_3->addWidget(buttonB, 2, 1, 1, 1);

        buttonK = new QPushButton(keyboardWidget);
        buttonK->setObjectName("buttonK");
        sizePolicy3.setHeightForWidth(buttonK->sizePolicy().hasHeightForWidth());
        buttonK->setSizePolicy(sizePolicy3);
        buttonK->setMinimumSize(QSize(15, 15));
        buttonK->setFont(font3);

        gridLayout_3->addWidget(buttonK, 4, 1, 1, 1);

        buttonQ = new QPushButton(keyboardWidget);
        buttonQ->setObjectName("buttonQ");
        sizePolicy3.setHeightForWidth(buttonQ->sizePolicy().hasHeightForWidth());
        buttonQ->setSizePolicy(sizePolicy3);
        buttonQ->setMinimumSize(QSize(15, 15));
        buttonQ->setFont(font3);

        gridLayout_3->addWidget(buttonQ, 4, 7, 1, 1);

        buttonS = new QPushButton(keyboardWidget);
        buttonS->setObjectName("buttonS");
        sizePolicy3.setHeightForWidth(buttonS->sizePolicy().hasHeightForWidth());
        buttonS->setSizePolicy(sizePolicy3);
        buttonS->setMinimumSize(QSize(15, 15));
        buttonS->setFont(font3);

        gridLayout_3->addWidget(buttonS, 5, 0, 1, 1);

        buttonT = new QPushButton(keyboardWidget);
        buttonT->setObjectName("buttonT");
        sizePolicy3.setHeightForWidth(buttonT->sizePolicy().hasHeightForWidth());
        buttonT->setSizePolicy(sizePolicy3);
        buttonT->setMinimumSize(QSize(15, 15));
        buttonT->setFont(font3);

        gridLayout_3->addWidget(buttonT, 5, 1, 1, 1);

        buttonG = new QPushButton(keyboardWidget);
        buttonG->setObjectName("buttonG");
        sizePolicy3.setHeightForWidth(buttonG->sizePolicy().hasHeightForWidth());
        buttonG->setSizePolicy(sizePolicy3);
        buttonG->setMinimumSize(QSize(15, 15));
        buttonG->setFont(font3);

        gridLayout_3->addWidget(buttonG, 2, 6, 1, 1);

        buttonP = new QPushButton(keyboardWidget);
        buttonP->setObjectName("buttonP");
        sizePolicy3.setHeightForWidth(buttonP->sizePolicy().hasHeightForWidth());
        buttonP->setSizePolicy(sizePolicy3);
        buttonP->setMinimumSize(QSize(15, 15));
        buttonP->setFont(font3);

        gridLayout_3->addWidget(buttonP, 4, 6, 1, 1);

        buttonX = new QPushButton(keyboardWidget);
        buttonX->setObjectName("buttonX");
        sizePolicy3.setHeightForWidth(buttonX->sizePolicy().hasHeightForWidth());
        buttonX->setSizePolicy(sizePolicy3);
        buttonX->setMinimumSize(QSize(15, 15));
        buttonX->setFont(font3);

        gridLayout_3->addWidget(buttonX, 5, 5, 1, 1);

        buttonR = new QPushButton(keyboardWidget);
        buttonR->setObjectName("buttonR");
        sizePolicy3.setHeightForWidth(buttonR->sizePolicy().hasHeightForWidth());
        buttonR->setSizePolicy(sizePolicy3);
        buttonR->setMinimumSize(QSize(15, 15));
        buttonR->setFont(font3);

        gridLayout_3->addWidget(buttonR, 4, 8, 1, 1);

        buttonV = new QPushButton(keyboardWidget);
        buttonV->setObjectName("buttonV");
        sizePolicy3.setHeightForWidth(buttonV->sizePolicy().hasHeightForWidth());
        buttonV->setSizePolicy(sizePolicy3);
        buttonV->setMinimumSize(QSize(15, 15));
        buttonV->setFont(font3);

        gridLayout_3->addWidget(buttonV, 5, 3, 1, 1);

        buttonZ = new QPushButton(keyboardWidget);
        buttonZ->setObjectName("buttonZ");
        sizePolicy3.setHeightForWidth(buttonZ->sizePolicy().hasHeightForWidth());
        buttonZ->setSizePolicy(sizePolicy3);
        buttonZ->setMinimumSize(QSize(15, 15));
        buttonZ->setFont(font3);

        gridLayout_3->addWidget(buttonZ, 5, 7, 1, 1);

        buttonD = new QPushButton(keyboardWidget);
        buttonD->setObjectName("buttonD");
        sizePolicy3.setHeightForWidth(buttonD->sizePolicy().hasHeightForWidth());
        buttonD->setSizePolicy(sizePolicy3);
        buttonD->setMinimumSize(QSize(15, 15));
        buttonD->setFont(font3);

        gridLayout_3->addWidget(buttonD, 2, 3, 1, 1);

        buttonY = new QPushButton(keyboardWidget);
        buttonY->setObjectName("buttonY");
        sizePolicy3.setHeightForWidth(buttonY->sizePolicy().hasHeightForWidth());
        buttonY->setSizePolicy(sizePolicy3);
        buttonY->setMinimumSize(QSize(15, 15));
        buttonY->setFont(font3);

        gridLayout_3->addWidget(buttonY, 5, 6, 1, 1);

        buttonA = new QPushButton(keyboardWidget);
        buttonA->setObjectName("buttonA");
        sizePolicy3.setHeightForWidth(buttonA->sizePolicy().hasHeightForWidth());
        buttonA->setSizePolicy(sizePolicy3);
        buttonA->setMinimumSize(QSize(15, 15));
        buttonA->setFont(font3);

        gridLayout_3->addWidget(buttonA, 2, 0, 1, 1);

        gridLayout_3->setRowMinimumHeight(0, 1);
        gridLayout_3->setRowMinimumHeight(1, 1);
        gridLayout_3->setRowMinimumHeight(2, 1);
        gridLayout_3->setRowMinimumHeight(3, 1);
        gridLayout_3->setRowMinimumHeight(4, 1);
        gridLayout_3->setRowMinimumHeight(5, 1);

        verticalLayout_7->addWidget(keyboardWidget);

        verticalLayout_7->setStretch(0, 5);
        verticalLayout_7->setStretch(2, 1);
        verticalLayout_7->setStretch(4, 3);
        stackedWidget->addWidget(pageGame);
        pageStatistics = new QWidget();
        pageStatistics->setObjectName("pageStatistics");
        label_2 = new QLabel(pageStatistics);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 120, 63, 20));
        stackedWidget->addWidget(pageStatistics);
        pageSettings = new QWidget();
        pageSettings->setObjectName("pageSettings");
        label_3 = new QLabel(pageSettings);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 130, 63, 20));
        buttonDifficulty = new QPushButton(pageSettings);
        buttonDifficulty->setObjectName("buttonDifficulty");
        buttonDifficulty->setEnabled(true);
        buttonDifficulty->setGeometry(QRect(60, 300, 658, 62));
        sizePolicy1.setHeightForWidth(buttonDifficulty->sizePolicy().hasHeightForWidth());
        buttonDifficulty->setSizePolicy(sizePolicy1);
        buttonDifficulty->setFont(font1);
        stackedWidget->addWidget(pageSettings);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        buttonBack = new QPushButton(centralwidget);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBack->sizePolicy().hasHeightForWidth());
        buttonBack->setSizePolicy(sizePolicy4);
        buttonBack->setFont(font1);

        gridLayout->addWidget(buttonBack, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 826, 21));
        menuhangman = new QMenu(menubar);
        menuhangman->setObjectName("menuhangman");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuhangman->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(buttonExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pictureMain->setText(QString());
        buttonStart->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        buttonSettings->setText(QCoreApplication::translate("MainWindow", "SETTINGS", nullptr));
        buttonStatistics->setText(QCoreApplication::translate("MainWindow", "STATISTICS", nullptr));
        buttonExit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        pictureGame->setText(QString());
        labelWordMask->setText(QString());
        buttonO->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        buttonW->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        buttonF->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        buttonN->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        buttonH->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        buttonM->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        buttonC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        buttonI->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        buttonJ->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        buttonL->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        buttonE->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        buttonU->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        buttonB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        buttonK->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        buttonQ->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        buttonS->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        buttonT->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        buttonG->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        buttonP->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        buttonX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        buttonR->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        buttonV->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        buttonZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        buttonD->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        buttonY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        buttonA->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "stats", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "settings", nullptr));
        buttonDifficulty->setText(QCoreApplication::translate("MainWindow", "DIFFICULTY", nullptr));
        buttonBack->setText(QCoreApplication::translate("MainWindow", "<--", nullptr));
        menuhangman->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
