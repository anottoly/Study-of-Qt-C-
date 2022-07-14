#include <iostream>
#include <QVector>
#include <QTextStream>
#include <QList>
#include <algorithm>
#include <QStringList>
#include <QSet>
#include <QMap>


int main()
{
    QTextStream out (stdout);
    //QVector<int> values = {1, 2, 4, 1000};
    //QList<double> dictionary {1313, 407, 404, 3443}, modes {1313, 110, 001, 404};

    QString str = "Google, sbrew, c'mon!";
    QStringList strlist = str.split(",");
    QStringListIterator iterator = strlist;

    out << strlist[1];

    while (iterator.hasNext())
    {
        out << iterator.next().trimmed() << Qt :: endl;
    }

    return 0;
}
