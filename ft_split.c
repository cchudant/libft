#include "libft.h"

static size_t	ft_split_u(const char *s, char c)
{
	const char	*begin_match;
	size_t		u;

	begin_match = s;
	u = 0;
	while (*s)
	{
		if (*s == c)
		{
			u++;
			begin_match = s;
		}
		s++;
	}
	if (*s == c)
	{
		u++;
		begin_match = s;
	}
	return (u);
}

static char		*ft_split_one(char **tab, size_t *split_i, const char *s, size_t len)
{
	char	*res;
	size_t	i;

	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	tab[*split_i] = res;
	(*split_i)++;
	return (res);
}

static char		**ft_split_inn(char **tab, size_t *split_i, const char *s, char c)
{
	const char *begin_match;

	begin_match = s;
	while (*s)
	{
		if (*s == c)
		{
			if (!ft_split_one(tab, split_i, begin_match, s - begin_match))
				return (NULL);
			begin_match = s;
		}
		s++;
	}
	if (*s == c)
	{
		if (!ft_split_one(tab, split_i, begin_match, s - begin_match))
			return (NULL);
		begin_match = s;
	}
	return (tab);
}

char			**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	split_i;
	size_t	i;

	if (!(tab = malloc(sizeof(char *) * (ft_split_u(s, c) + 1))))
		return (NULL);
	split_i = 0;
	if (!ft_split_inn(tab, &split_i, s, c))
	{
		i = 0;
		while (i <= split_i)
		{
			free(tab[i]);
			i++;
		}
		free(tab);
		return (NULL);
	}
	tab[split_i] = NULL;
	return (tab);
}
