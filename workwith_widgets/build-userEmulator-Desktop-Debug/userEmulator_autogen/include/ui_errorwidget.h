/********************************************************************************
** Form generated from reading UI file 'errorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWIDGET_H
#define UI_ERRORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errorwidget
{
public:
    QGridLayout *gridLayout;
    QLabel *imageLabel;
    QTextEdit *textoferror;
    QPushButton *okButton;

    void setupUi(QWidget *errorwidget)
    {
        if (errorwidget->objectName().isEmpty())
            errorwidget->setObjectName(QString::fromUtf8("errorwidget"));
        errorwidget->resize(234, 171);
        gridLayout = new QGridLayout(errorwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageLabel = new QLabel(errorwidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));

        gridLayout->addWidget(imageLabel, 0, 0, 1, 1);

        textoferror = new QTextEdit(errorwidget);
        textoferror->setObjectName(QString::fromUtf8("textoferror"));

        gridLayout->addWidget(textoferror, 1, 0, 1, 1);

        okButton = new QPushButton(errorwidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 2, 0, 1, 1);


        retranslateUi(errorwidget);

        QMetaObject::connectSlotsByName(errorwidget);
    } // setupUi

    void retranslateUi(QWidget *errorwidget)
    {
        errorwidget->setWindowTitle(QCoreApplication::translate("errorwidget", "Form", nullptr));
        imageLabel->setText(QString());
        okButton->setText(QCoreApplication::translate("errorwidget", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errorwidget: public Ui_errorwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWIDGET_H
