#include <iostream>
#include <QTextStream>
#include <QFileInfo>



int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    if (argc == 1)
    {
        out << "Choose a file, bro!" << Qt::endl;
        return 1;
    }
    else if (argc > 2)
    {
        out << "Write a file correctly, bro!" << Qt::endl;
        return 1;
    }
    else
    {
        QString filename = argv[1];
        QFile file {filename};
        if (!file.exists())
            out << "Choose a correct filename, bro!" << Qt::endl;
    }

    return 0;
}
