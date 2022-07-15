#include <iostream>
#include <QTextStream>
#include <QFileInfo>
#include "fileworker.h"


int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    if (argc == 1)
    {
        out << "Choose a file, bro!" << Qt::endl;
        return 1;
    }
    else
    {

        FileWorker file (argv[1]);
        file.openthefile();
        file.writein();
        out << QString("This is %1 bytes, bro!").arg(file.check_memorySizeByte()) << Qt::endl;

        out << file.readAllFile() << Qt::endl;

        out << file.readAllFile() << Qt::endl;
        file.writein();

        file.groupandowner();
    }

    return 0;
}
