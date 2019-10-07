#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;

	i = 0;
	while (src[i] && size > 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size - i > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
