#include "libft.h"

char	**ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;
	char	*str;

	while (ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
