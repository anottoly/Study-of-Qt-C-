/********************************************************************************
** Form generated from reading UI file 'graphwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWIDGET_H
#define UI_GRAPHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphwidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *newlineButton;
    QTableView *table;
    QPushButton *cleantableButton;
    QSpacerItem *verticalSpacer;
    QPushButton *readfileButton;
    QPushButton *saveButton;

    void setupUi(QWidget *graphwidget)
    {
        if (graphwidget->objectName().isEmpty())
            graphwidget->setObjectName(QString::fromUtf8("graphwidget"));
        graphwidget->resize(660, 300);
        gridLayout = new QGridLayout(graphwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        newlineButton = new QPushButton(graphwidget);
        newlineButton->setObjectName(QString::fromUtf8("newlineButton"));

        gridLayout->addWidget(newlineButton, 0, 2, 1, 1);

        table = new QTableView(graphwidget);
        table->setObjectName(QString::fromUtf8("table"));

        gridLayout->addWidget(table, 0, 0, 5, 1);

        cleantableButton = new QPushButton(graphwidget);
        cleantableButton->setObjectName(QString::fromUtf8("cleantableButton"));

        gridLayout->addWidget(cleantableButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 186, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        readfileButton = new QPushButton(graphwidget);
        readfileButton->setObjectName(QString::fromUtf8("readfileButton"));

        gridLayout->addWidget(readfileButton, 4, 1, 1, 2);

        saveButton = new QPushButton(graphwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 3, 1, 1, 2);


        retranslateUi(graphwidget);

        QMetaObject::connectSlotsByName(graphwidget);
    } // setupUi

    void retranslateUi(QWidget *graphwidget)
    {
        graphwidget->setWindowTitle(QCoreApplication::translate("graphwidget", "Form", nullptr));
        newlineButton->setText(QCoreApplication::translate("graphwidget", "New line", nullptr));
        cleantableButton->setText(QCoreApplication::translate("graphwidget", "Clean", nullptr));
        readfileButton->setText(QCoreApplication::translate("graphwidget", "Read file", nullptr));
        saveButton->setText(QCoreApplication::translate("graphwidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphwidget: public Ui_graphwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWIDGET_H
