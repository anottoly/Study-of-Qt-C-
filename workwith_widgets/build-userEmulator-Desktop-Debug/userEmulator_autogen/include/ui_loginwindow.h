/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *usrLabel;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *passLabel;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(255, 167);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        usrLabel = new QLabel(centralwidget);
        usrLabel->setObjectName(QString::fromUtf8("usrLabel"));

        gridLayout->addWidget(usrLabel, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 2);

        passLabel = new QLabel(centralwidget);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));

        gridLayout->addWidget(passLabel, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 2, 1, 1);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 255, 22));
        LoginWindow->setMenuBar(menubar);
        toolBar = new QToolBar(LoginWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        LoginWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(LoginWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        LoginWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
#if QT_CONFIG(shortcut)
        usrLabel->setBuddy(lineEdit);
        passLabel->setBuddy(lineEdit_2);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        usrLabel->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        passLabel->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("LoginWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("LoginWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
