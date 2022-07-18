#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QWidget>
#include <QKeyEvent>
#include <QApplication>
#include <QtWidgets>

loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow())

{
    ui->setupUi(this);
}

loginWindow::~loginWindow()
{
    delete ui;
}
