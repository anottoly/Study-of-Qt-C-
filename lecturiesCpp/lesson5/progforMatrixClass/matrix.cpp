#include "matrix.h"
#include <QTextStream>

Matrix::Matrix()
{
    intarr = new(int);
}

int& Matrix::operator[] (size_t size)
{
    return intarr[size];
}



QTextStream& Matrix::operator<<(QTextStream& out)
{
    out << intarr;
    return out;
}

Matrix::~Matrix()
{
    delete (intarr);
}
