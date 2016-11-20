/********************************************************************************
** Form generated from reading UI file 'snakeonqt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKEONQT_H
#define UI_SNAKEONQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "myqlabel.h"

QT_BEGIN_NAMESPACE

class Ui_SnakeOnQTClass
{
public:
    QAction *actionOpenFile;
    QAction *actionDoSnake;
    QAction *actionClearSnake;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    myQLabel *Image;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SnakeOnQTClass)
    {
        if (SnakeOnQTClass->objectName().isEmpty())
            SnakeOnQTClass->setObjectName(QStringLiteral("SnakeOnQTClass"));
        SnakeOnQTClass->resize(486, 312);
        actionOpenFile = new QAction(SnakeOnQTClass);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SnakeOnQT/Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon);
        actionDoSnake = new QAction(SnakeOnQTClass);
        actionDoSnake->setObjectName(QStringLiteral("actionDoSnake"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SnakeOnQT/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDoSnake->setIcon(icon1);
        actionClearSnake = new QAction(SnakeOnQTClass);
        actionClearSnake->setObjectName(QStringLiteral("actionClearSnake"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SnakeOnQT/Resources/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearSnake->setIcon(icon2);
        centralWidget = new QWidget(SnakeOnQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Image = new myQLabel(centralWidget);
        Image->setObjectName(QStringLiteral("Image"));

        gridLayout->addWidget(Image, 0, 0, 1, 1);

        SnakeOnQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SnakeOnQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 486, 22));
        SnakeOnQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SnakeOnQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SnakeOnQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SnakeOnQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SnakeOnQTClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionOpenFile);
        mainToolBar->addAction(actionDoSnake);
        mainToolBar->addAction(actionClearSnake);

        retranslateUi(SnakeOnQTClass);

        QMetaObject::connectSlotsByName(SnakeOnQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *SnakeOnQTClass)
    {
        SnakeOnQTClass->setWindowTitle(QApplication::translate("SnakeOnQTClass", "SnakeOnQT", 0));
        actionOpenFile->setText(QApplication::translate("SnakeOnQTClass", "OpenFile", 0));
        actionDoSnake->setText(QApplication::translate("SnakeOnQTClass", "DoSnake", 0));
        actionClearSnake->setText(QApplication::translate("SnakeOnQTClass", "ClearSnake", 0));
        Image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SnakeOnQTClass: public Ui_SnakeOnQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKEONQT_H
