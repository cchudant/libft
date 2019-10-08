#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*res;
	int		b;
	char	c;

	b = 1;
	while (n / b >= 10)
		b *= 10;
	while (b > 0)
	{
		c = '0' + n / b;
		write(fd, &c, 1);
		b /= 10;
	}
}
