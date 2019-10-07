#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (buf[i] == c)
			return (&buf[i]);
		i++;
	}
	return (NULL);
}
