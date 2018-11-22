/********************************************************************************
** Form generated from reading UI file 'Google_API_Test.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOGLE_API_TEST_H
#define UI_GOOGLE_API_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Google_API_TestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Google_API_TestClass)
    {
        if (Google_API_TestClass->objectName().isEmpty())
            Google_API_TestClass->setObjectName(QStringLiteral("Google_API_TestClass"));
        Google_API_TestClass->resize(600, 400);
        menuBar = new QMenuBar(Google_API_TestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Google_API_TestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Google_API_TestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Google_API_TestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Google_API_TestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Google_API_TestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Google_API_TestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Google_API_TestClass->setStatusBar(statusBar);

        retranslateUi(Google_API_TestClass);

        QMetaObject::connectSlotsByName(Google_API_TestClass);
    } // setupUi

    void retranslateUi(QMainWindow *Google_API_TestClass)
    {
        Google_API_TestClass->setWindowTitle(QApplication::translate("Google_API_TestClass", "Google_API_Test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Google_API_TestClass: public Ui_Google_API_TestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOGLE_API_TEST_H
