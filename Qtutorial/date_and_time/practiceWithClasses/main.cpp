#include <iostream>
#include <QDate>
#include <QTime>
#include <QTextStream>

using namespace std;

int main()
{
    QTextStream out(stdout);
    QDate today (1984, 12, 21);
    QTime now {14, 5, 3, 454};
    out << now.toString("h:mm:s - a") << Qt::endl << today.toString() << Qt::endl;
    return 0;
}
