//#include "numbers.txt"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QDebug>


int main (int argc, char* argv[])
{
    const QString filepath = "/home/localadmin/Develop/Study-of-Qt-Cpp/lecturiesCpp/lesson3/numbers.txt";
    QFile numbers;
    QTextStream out(stdout);
    //out << QFile::exists(filepath) << Qt::endl;
    numbers.setFileName(filepath);
    numbers.open(QIODevice::ReadOnly);
    QTextStream block(&numbers);
    QString filetext = block.readAll();
    QString tmp = "";


    for (int i = 0; i < filetext.size(); i ++)
    {
        if (filetext[i] <= '9' && filetext[i] >= '0')
        {
            tmp += filetext[i];
        }
        else if (tmp != "")
        {
            //out << tmp.toInt() << Qt::endl;
            tmp = "";
        }
    }
    out << argc << "  " << *argv << Qt::endl;

    numbers.close();
    return 0;
}
