#include "libft.h"

int		ft_atoi(char *str)
{
	int res;
	int mul;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	mul = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mul = 0;
		str++;
	}
	res = 0;
	while (*str)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (mul * res);
}
