#include <cmath>

int check_intvalue_prime (int value)
{
    for (int i = 2; i < pow(value, 0.5); i++)
    {
        if (value % i == 0)
        {
            return 1;
        }
    }

    return 0;
}
