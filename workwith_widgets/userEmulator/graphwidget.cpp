#include "graphwidget.h"
#include "ui_graphwidget.h"
#include <QWidget>
#include <QTableWidget>

GraphWidget::GraphWidget(QWidget *parent )
    : QWidget(parent)
    , ui(new Ui::graphwidget())
{
    ui->setupUi(this);
    ui->table->setColumnWidth(column_quan, line_quan);
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
