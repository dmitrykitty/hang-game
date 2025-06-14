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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QStackedWidget *stackedWidget;
    QWidget *pageMenu;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QLabel *pictureMain;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonStart;
    QPushButton *buttonSettings;
    QPushButton *buttonaAbout;
    QPushButton *buttonExit;
    QSpacerItem *horizontalSpacer_7;
    QWidget *pageGame;
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
    QPushButton *button_;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *pictureGame;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonPause;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelCurrentDifficulty;
    QLabel *labelAttemptsLeft;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDefinition;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonShowDefinition;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonBackToMenu;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonNewGame;
    QLabel *labelWordMask;
    QWidget *pageAbout;
    QGroupBox *groupBox;
    QLabel *label;
    QWidget *pageSettings;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonDifficulty;
    QPushButton *buttonAddWord;
    QPushButton *buttonResetDict;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonBack;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QMenu *menuhangman;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 780);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 780));
        MainWindow->setMaximumSize(QSize(1000, 780));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(480, 720));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 60, 971, 681));
        pageMenu = new QWidget();
        pageMenu->setObjectName("pageMenu");
        pageMenu->setEnabled(true);
        sizePolicy1.setHeightForWidth(pageMenu->sizePolicy().hasHeightForWidth());
        pageMenu->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(pageMenu);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 20);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        pictureMain = new QLabel(pageMenu);
        pictureMain->setObjectName("pictureMain");
        pictureMain->setEnabled(true);
        sizePolicy.setHeightForWidth(pictureMain->sizePolicy().hasHeightForWidth());
        pictureMain->setSizePolicy(sizePolicy);
        pictureMain->setMinimumSize(QSize(480, 380));
        pictureMain->setMaximumSize(QSize(480, 360));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(48);
        font.setBold(true);
        pictureMain->setFont(font);
        pictureMain->setToolTipDuration(-1);
        pictureMain->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pictureMain->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        horizontalLayout_9->addWidget(pictureMain);

        horizontalSpacer_9 = new QSpacerItem(150, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_6->addLayout(horizontalLayout_9);

        widget_3 = new QWidget(pageMenu);
        widget_3->setObjectName("widget_3");
        horizontalLayout_8 = new QHBoxLayout(widget_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_6 = new QSpacerItem(302, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonStart = new QPushButton(widget_3);
        buttonStart->setObjectName("buttonStart");
        buttonStart->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonStart->sizePolicy().hasHeightForWidth());
        buttonStart->setSizePolicy(sizePolicy1);
        buttonStart->setMinimumSize(QSize(300, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(16);
        font1.setBold(true);
        buttonStart->setFont(font1);

        verticalLayout_2->addWidget(buttonStart);

        buttonSettings = new QPushButton(widget_3);
        buttonSettings->setObjectName("buttonSettings");
        buttonSettings->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonSettings->sizePolicy().hasHeightForWidth());
        buttonSettings->setSizePolicy(sizePolicy1);
        buttonSettings->setMinimumSize(QSize(240, 0));
        buttonSettings->setFont(font1);

        verticalLayout_2->addWidget(buttonSettings);

        buttonaAbout = new QPushButton(widget_3);
        buttonaAbout->setObjectName("buttonaAbout");
        buttonaAbout->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonaAbout->sizePolicy().hasHeightForWidth());
        buttonaAbout->setSizePolicy(sizePolicy1);
        buttonaAbout->setMinimumSize(QSize(240, 0));
        buttonaAbout->setFont(font1);

        verticalLayout_2->addWidget(buttonaAbout);

        buttonExit = new QPushButton(widget_3);
        buttonExit->setObjectName("buttonExit");
        buttonExit->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy1);
        buttonExit->setMinimumSize(QSize(240, 0));
        buttonExit->setFont(font1);
        buttonExit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));

        verticalLayout_2->addWidget(buttonExit);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_7 = new QSpacerItem(301, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_6->addWidget(widget_3);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(pageMenu);
        pageGame = new QWidget();
        pageGame->setObjectName("pageGame");
        keyboardWidget = new QWidget(pageGame);
        keyboardWidget->setObjectName("keyboardWidget");
        keyboardWidget->setGeometry(QRect(0, 486, 961, 191));
        gridLayout_3 = new QGridLayout(keyboardWidget);
        gridLayout_3->setSpacing(7);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(10, 10, 10, 10);
        buttonF = new QPushButton(keyboardWidget);
        buttonF->setObjectName("buttonF");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonF->sizePolicy().hasHeightForWidth());
        buttonF->setSizePolicy(sizePolicy2);
        buttonF->setMinimumSize(QSize(15, 15));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(12);
        buttonF->setFont(font2);

        gridLayout_3->addWidget(buttonF, 2, 5, 1, 1);

        buttonP = new QPushButton(keyboardWidget);
        buttonP->setObjectName("buttonP");
        sizePolicy2.setHeightForWidth(buttonP->sizePolicy().hasHeightForWidth());
        buttonP->setSizePolicy(sizePolicy2);
        buttonP->setMinimumSize(QSize(15, 15));
        buttonP->setFont(font2);

        gridLayout_3->addWidget(buttonP, 4, 6, 1, 1);

        buttonY = new QPushButton(keyboardWidget);
        buttonY->setObjectName("buttonY");
        sizePolicy2.setHeightForWidth(buttonY->sizePolicy().hasHeightForWidth());
        buttonY->setSizePolicy(sizePolicy2);
        buttonY->setMinimumSize(QSize(12, 12));
        buttonY->setFont(font2);
        buttonY->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonY, 5, 6, 1, 1);

        buttonI = new QPushButton(keyboardWidget);
        buttonI->setObjectName("buttonI");
        sizePolicy2.setHeightForWidth(buttonI->sizePolicy().hasHeightForWidth());
        buttonI->setSizePolicy(sizePolicy2);
        buttonI->setMinimumSize(QSize(15, 15));
        buttonI->setFont(font2);

        gridLayout_3->addWidget(buttonI, 2, 8, 1, 1);

        buttonS = new QPushButton(keyboardWidget);
        buttonS->setObjectName("buttonS");
        sizePolicy2.setHeightForWidth(buttonS->sizePolicy().hasHeightForWidth());
        buttonS->setSizePolicy(sizePolicy2);
        buttonS->setMinimumSize(QSize(12, 12));
        buttonS->setFont(font2);
        buttonS->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonS, 5, 0, 1, 1);

        buttonC = new QPushButton(keyboardWidget);
        buttonC->setObjectName("buttonC");
        sizePolicy2.setHeightForWidth(buttonC->sizePolicy().hasHeightForWidth());
        buttonC->setSizePolicy(sizePolicy2);
        buttonC->setMinimumSize(QSize(15, 15));
        buttonC->setFont(font2);

        gridLayout_3->addWidget(buttonC, 2, 2, 1, 1);

        buttonT = new QPushButton(keyboardWidget);
        buttonT->setObjectName("buttonT");
        sizePolicy2.setHeightForWidth(buttonT->sizePolicy().hasHeightForWidth());
        buttonT->setSizePolicy(sizePolicy2);
        buttonT->setMinimumSize(QSize(12, 12));
        buttonT->setFont(font2);
        buttonT->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonT, 5, 1, 1, 1);

        buttonU = new QPushButton(keyboardWidget);
        buttonU->setObjectName("buttonU");
        sizePolicy2.setHeightForWidth(buttonU->sizePolicy().hasHeightForWidth());
        buttonU->setSizePolicy(sizePolicy2);
        buttonU->setMinimumSize(QSize(12, 12));
        buttonU->setFont(font2);
        buttonU->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonU, 5, 2, 1, 1);

        buttonA = new QPushButton(keyboardWidget);
        buttonA->setObjectName("buttonA");
        sizePolicy2.setHeightForWidth(buttonA->sizePolicy().hasHeightForWidth());
        buttonA->setSizePolicy(sizePolicy2);
        buttonA->setMinimumSize(QSize(15, 15));
        buttonA->setFont(font2);

        gridLayout_3->addWidget(buttonA, 2, 0, 1, 1);

        buttonV = new QPushButton(keyboardWidget);
        buttonV->setObjectName("buttonV");
        sizePolicy2.setHeightForWidth(buttonV->sizePolicy().hasHeightForWidth());
        buttonV->setSizePolicy(sizePolicy2);
        buttonV->setMinimumSize(QSize(12, 12));
        buttonV->setFont(font2);
        buttonV->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonV, 5, 3, 1, 1);

        buttonO = new QPushButton(keyboardWidget);
        buttonO->setObjectName("buttonO");
        sizePolicy2.setHeightForWidth(buttonO->sizePolicy().hasHeightForWidth());
        buttonO->setSizePolicy(sizePolicy2);
        buttonO->setMinimumSize(QSize(15, 15));
        buttonO->setFont(font2);

        gridLayout_3->addWidget(buttonO, 4, 5, 1, 1);

        buttonL = new QPushButton(keyboardWidget);
        buttonL->setObjectName("buttonL");
        sizePolicy2.setHeightForWidth(buttonL->sizePolicy().hasHeightForWidth());
        buttonL->setSizePolicy(sizePolicy2);
        buttonL->setMinimumSize(QSize(15, 15));
        buttonL->setFont(font2);

        gridLayout_3->addWidget(buttonL, 4, 2, 1, 1);

        buttonR = new QPushButton(keyboardWidget);
        buttonR->setObjectName("buttonR");
        sizePolicy2.setHeightForWidth(buttonR->sizePolicy().hasHeightForWidth());
        buttonR->setSizePolicy(sizePolicy2);
        buttonR->setMinimumSize(QSize(15, 15));
        buttonR->setFont(font2);

        gridLayout_3->addWidget(buttonR, 4, 8, 1, 1);

        buttonK = new QPushButton(keyboardWidget);
        buttonK->setObjectName("buttonK");
        sizePolicy2.setHeightForWidth(buttonK->sizePolicy().hasHeightForWidth());
        buttonK->setSizePolicy(sizePolicy2);
        buttonK->setMinimumSize(QSize(15, 15));
        buttonK->setFont(font2);

        gridLayout_3->addWidget(buttonK, 4, 1, 1, 1);

        buttonM = new QPushButton(keyboardWidget);
        buttonM->setObjectName("buttonM");
        sizePolicy2.setHeightForWidth(buttonM->sizePolicy().hasHeightForWidth());
        buttonM->setSizePolicy(sizePolicy2);
        buttonM->setMinimumSize(QSize(12, 12));
        buttonM->setFont(font2);

        gridLayout_3->addWidget(buttonM, 4, 3, 1, 1);

        buttonZ = new QPushButton(keyboardWidget);
        buttonZ->setObjectName("buttonZ");
        sizePolicy2.setHeightForWidth(buttonZ->sizePolicy().hasHeightForWidth());
        buttonZ->setSizePolicy(sizePolicy2);
        buttonZ->setMinimumSize(QSize(12, 12));
        buttonZ->setFont(font2);
        buttonZ->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonZ, 5, 7, 1, 1);

        buttonE = new QPushButton(keyboardWidget);
        buttonE->setObjectName("buttonE");
        sizePolicy2.setHeightForWidth(buttonE->sizePolicy().hasHeightForWidth());
        buttonE->setSizePolicy(sizePolicy2);
        buttonE->setMinimumSize(QSize(15, 15));
        buttonE->setFont(font2);

        gridLayout_3->addWidget(buttonE, 2, 4, 1, 1);

        buttonN = new QPushButton(keyboardWidget);
        buttonN->setObjectName("buttonN");
        sizePolicy2.setHeightForWidth(buttonN->sizePolicy().hasHeightForWidth());
        buttonN->setSizePolicy(sizePolicy2);
        buttonN->setMinimumSize(QSize(15, 15));
        buttonN->setFont(font2);

        gridLayout_3->addWidget(buttonN, 4, 4, 1, 1);

        buttonB = new QPushButton(keyboardWidget);
        buttonB->setObjectName("buttonB");
        sizePolicy2.setHeightForWidth(buttonB->sizePolicy().hasHeightForWidth());
        buttonB->setSizePolicy(sizePolicy2);
        buttonB->setMinimumSize(QSize(15, 15));
        buttonB->setFont(font2);

        gridLayout_3->addWidget(buttonB, 2, 1, 1, 1);

        buttonH = new QPushButton(keyboardWidget);
        buttonH->setObjectName("buttonH");
        sizePolicy2.setHeightForWidth(buttonH->sizePolicy().hasHeightForWidth());
        buttonH->setSizePolicy(sizePolicy2);
        buttonH->setMinimumSize(QSize(15, 15));
        buttonH->setFont(font2);

        gridLayout_3->addWidget(buttonH, 2, 7, 1, 1);

        buttonG = new QPushButton(keyboardWidget);
        buttonG->setObjectName("buttonG");
        sizePolicy2.setHeightForWidth(buttonG->sizePolicy().hasHeightForWidth());
        buttonG->setSizePolicy(sizePolicy2);
        buttonG->setMinimumSize(QSize(15, 15));
        buttonG->setFont(font2);

        gridLayout_3->addWidget(buttonG, 2, 6, 1, 1);

        buttonW = new QPushButton(keyboardWidget);
        buttonW->setObjectName("buttonW");
        sizePolicy2.setHeightForWidth(buttonW->sizePolicy().hasHeightForWidth());
        buttonW->setSizePolicy(sizePolicy2);
        buttonW->setMinimumSize(QSize(12, 12));
        buttonW->setFont(font2);
        buttonW->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonW, 5, 4, 1, 1);

        buttonQ = new QPushButton(keyboardWidget);
        buttonQ->setObjectName("buttonQ");
        sizePolicy2.setHeightForWidth(buttonQ->sizePolicy().hasHeightForWidth());
        buttonQ->setSizePolicy(sizePolicy2);
        buttonQ->setMinimumSize(QSize(15, 15));
        buttonQ->setFont(font2);

        gridLayout_3->addWidget(buttonQ, 4, 7, 1, 1);

        buttonD = new QPushButton(keyboardWidget);
        buttonD->setObjectName("buttonD");
        sizePolicy2.setHeightForWidth(buttonD->sizePolicy().hasHeightForWidth());
        buttonD->setSizePolicy(sizePolicy2);
        buttonD->setMinimumSize(QSize(15, 15));
        buttonD->setFont(font2);

        gridLayout_3->addWidget(buttonD, 2, 3, 1, 1);

        buttonX = new QPushButton(keyboardWidget);
        buttonX->setObjectName("buttonX");
        sizePolicy2.setHeightForWidth(buttonX->sizePolicy().hasHeightForWidth());
        buttonX->setSizePolicy(sizePolicy2);
        buttonX->setMinimumSize(QSize(12, 12));
        buttonX->setFont(font2);
        buttonX->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(buttonX, 5, 5, 1, 1);

        buttonJ = new QPushButton(keyboardWidget);
        buttonJ->setObjectName("buttonJ");
        sizePolicy2.setHeightForWidth(buttonJ->sizePolicy().hasHeightForWidth());
        buttonJ->setSizePolicy(sizePolicy2);
        buttonJ->setMinimumSize(QSize(15, 15));
        buttonJ->setFont(font2);

        gridLayout_3->addWidget(buttonJ, 4, 0, 1, 1);

        button_ = new QPushButton(keyboardWidget);
        button_->setObjectName("button_");
        sizePolicy2.setHeightForWidth(button_->sizePolicy().hasHeightForWidth());
        button_->setSizePolicy(sizePolicy2);
        button_->setMinimumSize(QSize(12, 12));
        button_->setFont(font2);
        button_->setIconSize(QSize(15, 15));

        gridLayout_3->addWidget(button_, 5, 8, 1, 1);

        gridLayout_3->setRowMinimumHeight(0, 1);
        gridLayout_3->setRowMinimumHeight(1, 1);
        gridLayout_3->setRowMinimumHeight(2, 1);
        gridLayout_3->setRowMinimumHeight(3, 1);
        gridLayout_3->setRowMinimumHeight(4, 1);
        gridLayout_3->setRowMinimumHeight(5, 1);
        layoutWidget = new QWidget(pageGame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(2, 1, 961, 461));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        pictureGame = new QLabel(layoutWidget);
        pictureGame->setObjectName("pictureGame");
        sizePolicy1.setHeightForWidth(pictureGame->sizePolicy().hasHeightForWidth());
        pictureGame->setSizePolicy(sizePolicy1);
        pictureGame->setMaximumSize(QSize(1000, 1000));

        verticalLayout_5->addWidget(pictureGame);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        buttonPause = new QPushButton(layoutWidget);
        buttonPause->setObjectName("buttonPause");
        buttonPause->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonPause->sizePolicy().hasHeightForWidth());
        buttonPause->setSizePolicy(sizePolicy);
        buttonPause->setMinimumSize(QSize(80, 40));
        buttonPause->setMaximumSize(QSize(80, 40));
        buttonPause->setSizeIncrement(QSize(0, 0));
        buttonPause->setFont(font1);

        horizontalLayout_4->addWidget(buttonPause);


        verticalLayout_4->addLayout(horizontalLayout_4);

        widget = new QWidget(layoutWidget);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelCurrentDifficulty = new QLabel(widget);
        labelCurrentDifficulty->setObjectName("labelCurrentDifficulty");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font3.setPointSize(12);
        font3.setBold(true);
        labelCurrentDifficulty->setFont(font3);
        labelCurrentDifficulty->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelCurrentDifficulty->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_3->addWidget(labelCurrentDifficulty);

        labelAttemptsLeft = new QLabel(widget);
        labelAttemptsLeft->setObjectName("labelAttemptsLeft");
        labelAttemptsLeft->setFont(font3);
        labelAttemptsLeft->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelAttemptsLeft->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_3->addWidget(labelAttemptsLeft);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        labelDefinition = new QLabel(widget);
        labelDefinition->setObjectName("labelDefinition");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelDefinition->sizePolicy().hasHeightForWidth());
        labelDefinition->setSizePolicy(sizePolicy3);
        labelDefinition->setMinimumSize(QSize(450, 110));
        labelDefinition->setMaximumSize(QSize(450, 110));
        labelDefinition->setSizeIncrement(QSize(0, 0));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font4.setPointSize(10);
        font4.setBold(false);
        labelDefinition->setFont(font4);
        labelDefinition->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelDefinition->setFrameShape(QFrame::Shape::Box);
        labelDefinition->setFrameShadow(QFrame::Shadow::Plain);
        labelDefinition->setTextFormat(Qt::TextFormat::AutoText);
        labelDefinition->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelDefinition->setWordWrap(true);
        labelDefinition->setMargin(10);

        verticalLayout_3->addWidget(labelDefinition);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        buttonShowDefinition = new QPushButton(widget);
        buttonShowDefinition->setObjectName("buttonShowDefinition");
        sizePolicy.setHeightForWidth(buttonShowDefinition->sizePolicy().hasHeightForWidth());
        buttonShowDefinition->setSizePolicy(sizePolicy);
        buttonShowDefinition->setMinimumSize(QSize(200, 40));
        buttonShowDefinition->setMaximumSize(QSize(200, 60));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font5.setPointSize(10);
        font5.setBold(true);
        buttonShowDefinition->setFont(font5);

        horizontalLayout_2->addWidget(buttonShowDefinition);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        buttonBackToMenu = new QPushButton(widget);
        buttonBackToMenu->setObjectName("buttonBackToMenu");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBackToMenu->sizePolicy().hasHeightForWidth());
        buttonBackToMenu->setSizePolicy(sizePolicy4);
        buttonBackToMenu->setMinimumSize(QSize(200, 40));
        buttonBackToMenu->setMaximumSize(QSize(200, 60));
        buttonBackToMenu->setSizeIncrement(QSize(0, 60));
        buttonBackToMenu->setFont(font5);

        horizontalLayout->addWidget(buttonBackToMenu);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonNewGame = new QPushButton(widget);
        buttonNewGame->setObjectName("buttonNewGame");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(60);
        sizePolicy5.setHeightForWidth(buttonNewGame->sizePolicy().hasHeightForWidth());
        buttonNewGame->setSizePolicy(sizePolicy5);
        buttonNewGame->setMinimumSize(QSize(200, 40));
        buttonNewGame->setMaximumSize(QSize(220, 60));
        buttonNewGame->setFont(font5);

        horizontalLayout->addWidget(buttonNewGame);


        verticalLayout_3->addLayout(horizontalLayout);

        labelWordMask = new QLabel(widget);
        labelWordMask->setObjectName("labelWordMask");
        sizePolicy.setHeightForWidth(labelWordMask->sizePolicy().hasHeightForWidth());
        labelWordMask->setSizePolicy(sizePolicy);
        labelWordMask->setMinimumSize(QSize(450, 60));
        labelWordMask->setMaximumSize(QSize(450, 60));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font6.setPointSize(23);
        font6.setBold(false);
        font6.setStrikeOut(false);
        font6.setKerning(true);
        labelWordMask->setFont(font6);
        labelWordMask->setAutoFillBackground(false);
        labelWordMask->setScaledContents(false);
        labelWordMask->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_3->addWidget(labelWordMask);


        verticalLayout_4->addWidget(widget);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_3->setStretch(0, 1);
        stackedWidget->addWidget(pageGame);
        pageAbout = new QWidget();
        pageAbout->setObjectName("pageAbout");
        groupBox = new QGroupBox(pageAbout);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(170, 60, 651, 481));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font7.setPointSize(20);
        font7.setBold(true);
        groupBox->setFont(font7);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 80, 581, 341));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font8.setPointSize(14);
        font8.setBold(false);
        label->setFont(font8);
        label->setWordWrap(true);
        stackedWidget->addWidget(pageAbout);
        pageSettings = new QWidget();
        pageSettings->setObjectName("pageSettings");
        layoutWidget1 = new QWidget(pageSettings);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(240, 190, 451, 281));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonDifficulty = new QPushButton(layoutWidget1);
        buttonDifficulty->setObjectName("buttonDifficulty");
        buttonDifficulty->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonDifficulty->sizePolicy().hasHeightForWidth());
        buttonDifficulty->setSizePolicy(sizePolicy1);
        buttonDifficulty->setFont(font1);

        verticalLayout->addWidget(buttonDifficulty);

        buttonAddWord = new QPushButton(layoutWidget1);
        buttonAddWord->setObjectName("buttonAddWord");
        buttonAddWord->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonAddWord->sizePolicy().hasHeightForWidth());
        buttonAddWord->setSizePolicy(sizePolicy1);
        buttonAddWord->setFont(font1);

        verticalLayout->addWidget(buttonAddWord);

        buttonResetDict = new QPushButton(layoutWidget1);
        buttonResetDict->setObjectName("buttonResetDict");
        buttonResetDict->setEnabled(true);
        sizePolicy1.setHeightForWidth(buttonResetDict->sizePolicy().hasHeightForWidth());
        buttonResetDict->setSizePolicy(sizePolicy1);
        buttonResetDict->setFont(font1);

        verticalLayout->addWidget(buttonResetDict);

        stackedWidget->addWidget(pageSettings);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(11, 11, 961, 42));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        buttonBack = new QPushButton(layoutWidget2);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonBack->sizePolicy().hasHeightForWidth());
        buttonBack->setSizePolicy(sizePolicy);
        buttonBack->setMinimumSize(QSize(80, 40));
        buttonBack->setMaximumSize(QSize(80, 40));
        buttonBack->setFont(font1);

        horizontalLayout_5->addWidget(buttonBack);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuhangman = new QMenu(menubar);
        menuhangman->setObjectName("menuhangman");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuhangman->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(buttonExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pictureMain->setText(QString());
        buttonStart->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        buttonSettings->setText(QCoreApplication::translate("MainWindow", "SETTINGS", nullptr));
        buttonaAbout->setText(QCoreApplication::translate("MainWindow", "ABOUT", nullptr));
        buttonExit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
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
        button_->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        pictureGame->setText(QString());
        buttonPause->setText(QCoreApplication::translate("MainWindow", "||", nullptr));
        labelCurrentDifficulty->setText(QCoreApplication::translate("MainWindow", "CURRENT DIFFICULTY: MEDIUM", nullptr));
        labelAttemptsLeft->setText(QCoreApplication::translate("MainWindow", "ATTEMPTS LEFT: 5", nullptr));
        labelDefinition->setText(QCoreApplication::translate("MainWindow", "Also called header guard. A pattern using preprocessor directives (#ifndef, #define, #endif) at the top of a header file to prevent multiple inclusions of the same header in one compilation.aaaaaaa fddddddd a A FFFFFF a ssdf qew q ED G ERTGWFW QDWSEF  QFWFG", nullptr));
        buttonShowDefinition->setText(QCoreApplication::translate("MainWindow", "SHOW DEFINITION", nullptr));
        buttonBackToMenu->setText(QCoreApplication::translate("MainWindow", "BACK TO MENU", nullptr));
        buttonNewGame->setText(QCoreApplication::translate("MainWindow", "NEW GAME", nullptr));
        labelWordMask->setText(QCoreApplication::translate("MainWindow", " _ _ _ _ _ _ _ _ _ _ V E C _ _ R", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ABOUT THE GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Text (WSE: TXT),[4] previously known as LiveChat Software, is a Polish software company specializing in customer service and artificial intelligence solutions.[5] Based in Wroc\305\202aw, it offers a suite of tools for B2B and B2C communication, including popular platforms like LiveChat, ChatBot, and HelpDesk.[6] The company is publicly listed on the Warsaw Stock Exchange.[7][8]\n"
"\n"
"The company was founded in Wroclaw, Poland in 2002, and also has US offices in Boston, Massachusetts. In 2023, the company rebranded from \342\200\234LiveChat Software\342\200\235 to \342\200\234Text\342\200\235 to reflect its broadened focus on artificial intelligence and e-commerce solutions.[9]", nullptr));
        buttonDifficulty->setText(QCoreApplication::translate("MainWindow", "SELECT DIFFICULTY", nullptr));
        buttonAddWord->setText(QCoreApplication::translate("MainWindow", "ADD CUSTOM WORD", nullptr));
        buttonResetDict->setText(QCoreApplication::translate("MainWindow", "RESTORE DEFAULT WORDS", nullptr));
        buttonBack->setText(QCoreApplication::translate("MainWindow", "<--", nullptr));
        menuhangman->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
