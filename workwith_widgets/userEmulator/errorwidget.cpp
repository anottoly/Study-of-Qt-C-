#include "errorwidget.h"
#include "ui_errorwidget.h"
#include <QWidget>
#include <QString>

ErrorWidget::ErrorWidget(QString *str, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::errorwidget())
{

}

ErrorWidget::~ErrorWidget()
{
    delete ui;
}
