#include "mainwindow.h"
#include "loginwindow.h"
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);
    loginWindow win;
    win.show();
    return app.exec();
}
