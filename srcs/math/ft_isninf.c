#include "math.h"

t_bool	ft_isninf(double dbl)
{
	t_reinterpret_double n;

	n.d = dbl;
	return ((n.ll >> 52 & 0xfff) == 0xfff &&
			(n.ll & 0xfffffffffffff) == 0);
}
