#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	if (!(str = malloc(ft_strlen(s1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
