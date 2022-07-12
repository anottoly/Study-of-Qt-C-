//#include "numbers.txt"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QDebug>
int main ()
{
    const QString filepath = "/home/localadmin/Develop/test4/pro/numbers.txt";
    QFile numbers;
    QTextStream out(stdout);
    out << QFile::exists(filepath);
    numbers.setFileName(filepath);
    numbers.open(QIODevice::ReadOnly);
    QTextStream block(&numbers);
    QString filetext = block.readAll();
    QString tmp = "", data = "";
    int k = 0;

    for (int i = 0; i < filetext.size(); i++)
    {
        if (filetext[i] <= '9' & filetext[i] >= '0')
        {
            tmp += filetext[i];
        }
        else
        {
            data[k] = tmp;
            k += 1;
        }
    }
    numbers.close();
    return 0;
}
