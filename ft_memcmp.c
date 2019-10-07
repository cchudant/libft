#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf1;
	unsigned char	*buf2;
	size_t			i;

	buf1 = (unsigned char *) s1;
	buf2 = (unsigned char *) s2;
	i = 0;
	while (i < n && buf1[i] == buf2[i])
		i++;
	return (buf1[i] - buf2[i]);
}
