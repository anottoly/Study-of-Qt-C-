#ifndef MATRIX_H
#define MATRIX_H
#include <QTextStream>
#include <iostream>

class Matrix
{
    int* intarr;
public:
    Matrix();
    void setvalue(int value);

    int& operator[](size_t size);
    //Matrix operator=(Matrix& arr);
    QTextStream& operator<<(QTextStream& out);

    ~Matrix();
};

#endif // MATRIX_H
