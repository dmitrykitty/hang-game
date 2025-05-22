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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QLabel *pictureGame;
    QLabel *labelWordMask;
    QWidget *keyboardWidget;
    QGridLayout *gridLayout_3;
    QPushButton *buttonF;
    QPushButton *buttonP;
    QPushButton *buttonY;
    QPushButton *buttonI;
    QPushButton *buttonS;
    QPushButton *buttonC;
    QPushButton *buttonT;
    QPushButton *buttonU;
    QPushButton *buttonA;
    QPushButton *buttonV;
    QPushButton *buttonO;
    QPushButton *buttonL;
    QPushButton *buttonR;
    QPushButton *buttonK;
    QPushButton *buttonM;
    QPushButton *buttonZ;
    QPushButton *buttonE;
    QPushButton *buttonN;
    QPushButton *buttonB;
    QPushButton *buttonH;
    QPushButton *buttonG;
    QPushButton *buttonW;
    QPushButton *buttonQ;
    QPushButton *buttonD;
    QPushButton *buttonX;
    QPushButton *buttonJ;
    QPushButton *buttonPause;
    QLabel *labelAttemptsLeft;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonBackToMenu;
    QPushButton *buttonNewGame;
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
        MainWindow->resize(941, 855);
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
        pictureGame = new QLabel(pageGame);
        pictureGame->setObjectName("pictureGame");
        pictureGame->setGeometry(QRect(11, 51, 371, 431));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pictureGame->sizePolicy().hasHeightForWidth());
        pictureGame->setSizePolicy(sizePolicy3);
        pictureGame->setMaximumSize(QSize(484, 484));
        labelWordMask = new QLabel(pageGame);
        labelWordMask->setObjectName("labelWordMask");
        labelWordMask->setGeometry(QRect(410, 420, 481, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(24);
        font2.setBold(false);
        labelWordMask->setFont(font2);
        labelWordMask->setScaledContents(false);
        labelWordMask->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        keyboardWidget = new QWidget(pageGame);
        keyboardWidget->setObjectName("keyboardWidget");
        keyboardWidget->setGeometry(QRect(20, 520, 881, 211));
        gridLayout_3 = new QGridLayout(keyboardWidget);
        gridLayout_3->setSpacing(7);
        gridLayout_3->setObjectName("gridLayout_3");
        buttonF = new QPushButton(keyboardWidget);
        buttonF->setObjectName("buttonF");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonF->sizePolicy().hasHeightForWidth());
        buttonF->setSizePolicy(sizePolicy4);
        buttonF->setMinimumSize(QSize(15, 15));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font3.setPointSize(12);
        buttonF->setFont(font3);

        gridLayout_3->addWidget(buttonF, 2, 5, 1, 1);

        buttonP = new QPushButton(keyboardWidget);
        buttonP->setObjectName("buttonP");
        sizePolicy4.setHeightForWidth(buttonP->sizePolicy().hasHeightForWidth());
        buttonP->setSizePolicy(sizePolicy4);
        buttonP->setMinimumSize(QSize(15, 15));
        buttonP->setFont(font3);

        gridLayout_3->addWidget(buttonP, 4, 6, 1, 1);

        buttonY = new QPushButton(keyboardWidget);
        buttonY->setObjectName("buttonY");
        sizePolicy4.setHeightForWidth(buttonY->sizePolicy().hasHeightForWidth());
        buttonY->setSizePolicy(sizePolicy4);
        buttonY->setMinimumSize(QSize(12, 12));
        buttonY->setFont(font3);
        buttonY->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonY, 5, 6, 1, 1);

        buttonI = new QPushButton(keyboardWidget);
        buttonI->setObjectName("buttonI");
        sizePolicy4.setHeightForWidth(buttonI->sizePolicy().hasHeightForWidth());
        buttonI->setSizePolicy(sizePolicy4);
        buttonI->setMinimumSize(QSize(15, 15));
        buttonI->setFont(font3);

        gridLayout_3->addWidget(buttonI, 2, 8, 1, 1);

        buttonS = new QPushButton(keyboardWidget);
        buttonS->setObjectName("buttonS");
        sizePolicy4.setHeightForWidth(buttonS->sizePolicy().hasHeightForWidth());
        buttonS->setSizePolicy(sizePolicy4);
        buttonS->setMinimumSize(QSize(12, 12));
        buttonS->setFont(font3);
        buttonS->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonS, 5, 0, 1, 1);

        buttonC = new QPushButton(keyboardWidget);
        buttonC->setObjectName("buttonC");
        sizePolicy4.setHeightForWidth(buttonC->sizePolicy().hasHeightForWidth());
        buttonC->setSizePolicy(sizePolicy4);
        buttonC->setMinimumSize(QSize(15, 15));
        buttonC->setFont(font3);

        gridLayout_3->addWidget(buttonC, 2, 2, 1, 1);

        buttonT = new QPushButton(keyboardWidget);
        buttonT->setObjectName("buttonT");
        sizePolicy4.setHeightForWidth(buttonT->sizePolicy().hasHeightForWidth());
        buttonT->setSizePolicy(sizePolicy4);
        buttonT->setMinimumSize(QSize(12, 12));
        buttonT->setFont(font3);
        buttonT->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonT, 5, 1, 1, 1);

        buttonU = new QPushButton(keyboardWidget);
        buttonU->setObjectName("buttonU");
        sizePolicy4.setHeightForWidth(buttonU->sizePolicy().hasHeightForWidth());
        buttonU->setSizePolicy(sizePolicy4);
        buttonU->setMinimumSize(QSize(12, 12));
        buttonU->setFont(font3);
        buttonU->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonU, 5, 2, 1, 1);

        buttonA = new QPushButton(keyboardWidget);
        buttonA->setObjectName("buttonA");
        sizePolicy4.setHeightForWidth(buttonA->sizePolicy().hasHeightForWidth());
        buttonA->setSizePolicy(sizePolicy4);
        buttonA->setMinimumSize(QSize(15, 15));
        buttonA->setFont(font3);

        gridLayout_3->addWidget(buttonA, 2, 0, 1, 1);

        buttonV = new QPushButton(keyboardWidget);
        buttonV->setObjectName("buttonV");
        sizePolicy4.setHeightForWidth(buttonV->sizePolicy().hasHeightForWidth());
        buttonV->setSizePolicy(sizePolicy4);
        buttonV->setMinimumSize(QSize(12, 12));
        buttonV->setFont(font3);
        buttonV->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonV, 5, 3, 1, 1);

        buttonO = new QPushButton(keyboardWidget);
        buttonO->setObjectName("buttonO");
        sizePolicy4.setHeightForWidth(buttonO->sizePolicy().hasHeightForWidth());
        buttonO->setSizePolicy(sizePolicy4);
        buttonO->setMinimumSize(QSize(15, 15));
        buttonO->setFont(font3);

        gridLayout_3->addWidget(buttonO, 4, 5, 1, 1);

        buttonL = new QPushButton(keyboardWidget);
        buttonL->setObjectName("buttonL");
        sizePolicy4.setHeightForWidth(buttonL->sizePolicy().hasHeightForWidth());
        buttonL->setSizePolicy(sizePolicy4);
        buttonL->setMinimumSize(QSize(15, 15));
        buttonL->setFont(font3);

        gridLayout_3->addWidget(buttonL, 4, 2, 1, 1);

        buttonR = new QPushButton(keyboardWidget);
        buttonR->setObjectName("buttonR");
        sizePolicy4.setHeightForWidth(buttonR->sizePolicy().hasHeightForWidth());
        buttonR->setSizePolicy(sizePolicy4);
        buttonR->setMinimumSize(QSize(15, 15));
        buttonR->setFont(font3);

        gridLayout_3->addWidget(buttonR, 4, 8, 1, 1);

        buttonK = new QPushButton(keyboardWidget);
        buttonK->setObjectName("buttonK");
        sizePolicy4.setHeightForWidth(buttonK->sizePolicy().hasHeightForWidth());
        buttonK->setSizePolicy(sizePolicy4);
        buttonK->setMinimumSize(QSize(15, 15));
        buttonK->setFont(font3);

        gridLayout_3->addWidget(buttonK, 4, 1, 1, 1);

        buttonM = new QPushButton(keyboardWidget);
        buttonM->setObjectName("buttonM");
        sizePolicy4.setHeightForWidth(buttonM->sizePolicy().hasHeightForWidth());
        buttonM->setSizePolicy(sizePolicy4);
        buttonM->setMinimumSize(QSize(12, 12));
        buttonM->setFont(font3);

        gridLayout_3->addWidget(buttonM, 4, 3, 1, 1);

        buttonZ = new QPushButton(keyboardWidget);
        buttonZ->setObjectName("buttonZ");
        sizePolicy4.setHeightForWidth(buttonZ->sizePolicy().hasHeightForWidth());
        buttonZ->setSizePolicy(sizePolicy4);
        buttonZ->setMinimumSize(QSize(12, 12));
        buttonZ->setFont(font3);
        buttonZ->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonZ, 5, 7, 1, 1);

        buttonE = new QPushButton(keyboardWidget);
        buttonE->setObjectName("buttonE");
        sizePolicy4.setHeightForWidth(buttonE->sizePolicy().hasHeightForWidth());
        buttonE->setSizePolicy(sizePolicy4);
        buttonE->setMinimumSize(QSize(15, 15));
        buttonE->setFont(font3);

        gridLayout_3->addWidget(buttonE, 2, 4, 1, 1);

        buttonN = new QPushButton(keyboardWidget);
        buttonN->setObjectName("buttonN");
        sizePolicy4.setHeightForWidth(buttonN->sizePolicy().hasHeightForWidth());
        buttonN->setSizePolicy(sizePolicy4);
        buttonN->setMinimumSize(QSize(15, 15));
        buttonN->setFont(font3);

        gridLayout_3->addWidget(buttonN, 4, 4, 1, 1);

        buttonB = new QPushButton(keyboardWidget);
        buttonB->setObjectName("buttonB");
        sizePolicy4.setHeightForWidth(buttonB->sizePolicy().hasHeightForWidth());
        buttonB->setSizePolicy(sizePolicy4);
        buttonB->setMinimumSize(QSize(15, 15));
        buttonB->setFont(font3);

        gridLayout_3->addWidget(buttonB, 2, 1, 1, 1);

        buttonH = new QPushButton(keyboardWidget);
        buttonH->setObjectName("buttonH");
        sizePolicy4.setHeightForWidth(buttonH->sizePolicy().hasHeightForWidth());
        buttonH->setSizePolicy(sizePolicy4);
        buttonH->setMinimumSize(QSize(15, 15));
        buttonH->setFont(font3);

        gridLayout_3->addWidget(buttonH, 2, 7, 1, 1);

        buttonG = new QPushButton(keyboardWidget);
        buttonG->setObjectName("buttonG");
        sizePolicy4.setHeightForWidth(buttonG->sizePolicy().hasHeightForWidth());
        buttonG->setSizePolicy(sizePolicy4);
        buttonG->setMinimumSize(QSize(15, 15));
        buttonG->setFont(font3);

        gridLayout_3->addWidget(buttonG, 2, 6, 1, 1);

        buttonW = new QPushButton(keyboardWidget);
        buttonW->setObjectName("buttonW");
        sizePolicy4.setHeightForWidth(buttonW->sizePolicy().hasHeightForWidth());
        buttonW->setSizePolicy(sizePolicy4);
        buttonW->setMinimumSize(QSize(12, 12));
        buttonW->setFont(font3);
        buttonW->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonW, 5, 4, 1, 1);

        buttonQ = new QPushButton(keyboardWidget);
        buttonQ->setObjectName("buttonQ");
        sizePolicy4.setHeightForWidth(buttonQ->sizePolicy().hasHeightForWidth());
        buttonQ->setSizePolicy(sizePolicy4);
        buttonQ->setMinimumSize(QSize(15, 15));
        buttonQ->setFont(font3);

        gridLayout_3->addWidget(buttonQ, 4, 7, 1, 1);

        buttonD = new QPushButton(keyboardWidget);
        buttonD->setObjectName("buttonD");
        sizePolicy4.setHeightForWidth(buttonD->sizePolicy().hasHeightForWidth());
        buttonD->setSizePolicy(sizePolicy4);
        buttonD->setMinimumSize(QSize(15, 15));
        buttonD->setFont(font3);

        gridLayout_3->addWidget(buttonD, 2, 3, 1, 1);

        buttonX = new QPushButton(keyboardWidget);
        buttonX->setObjectName("buttonX");
        sizePolicy4.setHeightForWidth(buttonX->sizePolicy().hasHeightForWidth());
        buttonX->setSizePolicy(sizePolicy4);
        buttonX->setMinimumSize(QSize(12, 12));
        buttonX->setFont(font3);
        buttonX->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonX, 5, 5, 1, 1);

        buttonJ = new QPushButton(keyboardWidget);
        buttonJ->setObjectName("buttonJ");
        sizePolicy4.setHeightForWidth(buttonJ->sizePolicy().hasHeightForWidth());
        buttonJ->setSizePolicy(sizePolicy4);
        buttonJ->setMinimumSize(QSize(15, 15));
        buttonJ->setFont(font3);

        gridLayout_3->addWidget(buttonJ, 4, 0, 1, 1);

        gridLayout_3->setRowMinimumHeight(0, 1);
        gridLayout_3->setRowMinimumHeight(1, 1);
        gridLayout_3->setRowMinimumHeight(2, 1);
        gridLayout_3->setRowMinimumHeight(3, 1);
        gridLayout_3->setRowMinimumHeight(4, 1);
        gridLayout_3->setRowMinimumHeight(5, 1);
        buttonPause = new QPushButton(pageGame);
        buttonPause->setObjectName("buttonPause");
        buttonPause->setEnabled(true);
        buttonPause->setGeometry(QRect(800, 20, 80, 47));
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(buttonPause->sizePolicy().hasHeightForWidth());
        buttonPause->setSizePolicy(sizePolicy5);
        buttonPause->setFont(font1);
        labelAttemptsLeft = new QLabel(pageGame);
        labelAttemptsLeft->setObjectName("labelAttemptsLeft");
        labelAttemptsLeft->setGeometry(QRect(640, 90, 241, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font4.setPointSize(12);
        font4.setBold(false);
        labelAttemptsLeft->setFont(font4);
        labelAttemptsLeft->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelAttemptsLeft->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        widget = new QWidget(pageGame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(420, 320, 481, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBackToMenu = new QPushButton(widget);
        buttonBackToMenu->setObjectName("buttonBackToMenu");
        sizePolicy.setHeightForWidth(buttonBackToMenu->sizePolicy().hasHeightForWidth());
        buttonBackToMenu->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font5.setPointSize(10);
        font5.setBold(false);
        buttonBackToMenu->setFont(font5);

        horizontalLayout->addWidget(buttonBackToMenu);

        buttonNewGame = new QPushButton(widget);
        buttonNewGame->setObjectName("buttonNewGame");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(16);
        sizePolicy6.setHeightForWidth(buttonNewGame->sizePolicy().hasHeightForWidth());
        buttonNewGame->setSizePolicy(sizePolicy6);
        buttonNewGame->setFont(font5);

        horizontalLayout->addWidget(buttonNewGame);

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

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        buttonBack = new QPushButton(centralwidget);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setEnabled(true);
        sizePolicy5.setHeightForWidth(buttonBack->sizePolicy().hasHeightForWidth());
        buttonBack->setSizePolicy(sizePolicy5);
        buttonBack->setFont(font1);

        gridLayout->addWidget(buttonBack, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        buttonBack->raise();
        stackedWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 941, 25));
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
        labelWordMask->setText(QCoreApplication::translate("MainWindow", " _ _ _ _ _ _ _ V E C _ _ R", nullptr));
        buttonF->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        buttonP->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        buttonY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        buttonI->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        buttonS->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        buttonC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        buttonT->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        buttonU->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        buttonA->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        buttonV->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        buttonO->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        buttonL->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        buttonR->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        buttonK->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        buttonM->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        buttonZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        buttonE->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        buttonN->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        buttonB->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        buttonH->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        buttonG->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        buttonW->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        buttonQ->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        buttonD->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        buttonX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        buttonJ->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        buttonPause->setText(QCoreApplication::translate("MainWindow", "||", nullptr));
        labelAttemptsLeft->setText(QCoreApplication::translate("MainWindow", "ATTEMPTS LEFT: 5", nullptr));
        buttonBackToMenu->setText(QCoreApplication::translate("MainWindow", "BACK TO MENU", nullptr));
        buttonNewGame->setText(QCoreApplication::translate("MainWindow", "NEW GAME", nullptr));
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
