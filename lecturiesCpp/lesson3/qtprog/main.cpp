//#include "numbers.txt"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QDebug>
#include "lesson3namespace.h"

int main (int argc, char* argv[], char* envp[])
{
    const QString filepath = "/home/localadmin/Develop/Study-of-Qt-Cpp/lecturiesCpp/lesson3/numbers.txt";
    QFile numbers;
    QTextStream out(stdout);
    QTextStream in(stdin);
    numbers.setFileName(filepath);
    numbers.open(QIODevice::ReadOnly);
    QTextStream block(&numbers);
    QString filetext = block.readAll();
    QString argument = *argv, tmp = "";
    int start = -1, end = -1, id_array = 0;




    for (int i = 1; i < argc; i++)
    {
        tmp = argv[i];
        if (tmp != "" && start != -1)
            start = tmp.toInt();
        else if (tmp != "")
        {
            end = tmp.toInt();
            break;
        }
    }
    if (end == -1 && tmp != "")
        end = tmp.toInt();

    tmp = "";
    if (argc - 1 == 2 && end - start > 0)
    {
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
                id_array ++;
            }
        }
        int array[id_array];
        id_array = 0;
        for (int i = 0; i < filetext.size(); i ++)
        {
            if (filetext[i] <= '9' && filetext[i] >= '0')
            {
                tmp += filetext[i];
            }
            else if (tmp != "")
            {
                array[id_array] = tmp.toInt();
                tmp = "";
            }
        }
        int count;

        out << count;
    }
    else
        out << 0;
    //out << start << ' ' << end << ' ' << *argv << Qt::endl;
    numbers.close();
    return 0;
}

