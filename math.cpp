#include "./math.h"

int Add(int nb1, int nb2)
{
    return nb1 + nb2;
}

int Sub(int nb1, int nb2)
{
    return nb1 - nb2;
}

int Divide(int nb1, int nb2)
{
    if (nb2 != 0)
    {
        return nb1 / nb2;
    }
    return 0;
}