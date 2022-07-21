#include "mainwindow.h"
#include "loginwindow.h"
#include "graphwidget.h"
#include "errorwidget.h"
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);
    loginWindow win1;
    GraphWidget win2;
    win1.show();
    win2.show();
    return app.exec();
}
