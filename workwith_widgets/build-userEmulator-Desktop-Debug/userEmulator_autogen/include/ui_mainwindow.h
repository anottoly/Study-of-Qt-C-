/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logindialog
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logindialog)
    {
        if (logindialog->objectName().isEmpty())
            logindialog->setObjectName(QString::fromUtf8("logindialog"));
        logindialog->resize(400, 200);
        centralwidget = new QWidget(logindialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logindialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logindialog);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        logindialog->setMenuBar(menubar);
        statusbar = new QStatusBar(logindialog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        logindialog->setStatusBar(statusbar);

        retranslateUi(logindialog);

        QMetaObject::connectSlotsByName(logindialog);
    } // setupUi

    void retranslateUi(QMainWindow *logindialog)
    {
        logindialog->setWindowTitle(QCoreApplication::translate("logindialog", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logindialog: public Ui_logindialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
