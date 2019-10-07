#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *found;

	found = NULL;
	while (*s)
	{
		if (*s == c)
			found = (char *) s;
		s++;
	}
	return (c == '\0' ? (char *) s : found);
}
