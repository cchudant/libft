#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		b;
	size_t	len;
	size_t	i;

	b = 1;
	len = 1;
	while (n / b >= 10)
	{
		b *= 10;
		len++;
	}
	if (!(res = malloc(sizeof(char) * (len + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	if (n < 0)
		res[i++] = '-';
	i = 0;
	while (b > 0)
	{
		res[i] = n / b;
		i++;
		b /= 10;
	}
	return (res);
}
