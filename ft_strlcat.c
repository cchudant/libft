#include "libft.h"

unsigned int ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t i;

	dst_len = ft_strlen(dst);
	if (size == 0)
		return (dst_len + ft_strlen(src));
	i = 0;
	while (src[i] && size - dst_len > 1)
	{
		dst[dst_len + i] = *src;
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + i + ft_strlen(src));
}
