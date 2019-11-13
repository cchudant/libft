#include "math.h"

long long	ft_floor(double x)
{
    long long xi = (long long)x;
    return (x < xi ? xi - 1 : xi);
}
