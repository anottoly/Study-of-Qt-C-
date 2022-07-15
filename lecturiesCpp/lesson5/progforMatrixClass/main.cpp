#include <iostream>
#include <QTextStream>
#include "matrix.h"

int main()
{
    QTextStream out (stdout);

    int* arr = new int[3];
    arr[2] = 0;
    out << arr[2] << Qt::endl;
    delete[] arr;
    return 0;
}
