#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include "graphwidget.h"

loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow())

{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), &QPushButton::clicked, this, &loginWindow::clicked);
}

void loginWindow::clicked()
{
    ui->usrLabel->clear();
}

loginWindow::~loginWindow()
{
    delete ui;
}
