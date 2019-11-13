
#include "math.h"

long long	ft_ceil(double x)
{
    long long xi = (long long)x;
    return (x > xi ? xi + 1 : xi);
}
