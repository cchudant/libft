#include "math.h"

t_bool	ft_isnan(double dbl)
{
	t_reinterpret_double n;

	n.d = dbl;
	return ((n.ll >> 52 & 0x7ff) == 0x7ff &&
			(n.ll & 0xfffffffffffff) != 0);
}
