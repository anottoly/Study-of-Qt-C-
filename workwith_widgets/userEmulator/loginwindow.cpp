#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include "graphwidget.h"
#include "main.cpp"

loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow())

{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), &QPushButton::clicked, this, &main::clicked);
}

void loginWindow::clicked()
{

}

loginWindow::~loginWindow()
{
    delete ui;
}
