#include "graphwidget.h"
#include "ui_graphwidget.h"
#include <QWidget>
#include <QTableWidget>

GraphWidget::GraphWidget(QWidget *parent )
    : QWidget(parent)
    , ui(new Ui::graphwidget())
{

}

void GraphWidget::addnewline()
{

}

void GraphWidget::savefile()
{

}

void GraphWidget::cleantable()
{

}

void GraphWidget::readfile()
{

}

GraphWidget::~GraphWidget()
{
    delete ui;
}
