
#include "Timer.cpp"

int column(int n, int m)
{
    int i, j;
    int array[n][m];

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            array[n][m] = 1;
        }
    }    

    Timer t;
    int count = 0;

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            count += array[n][m];
        }
    }

    return count;
}
