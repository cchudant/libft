/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:03:05 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/09 13:03:07 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_u(const char *s, char c)
{
	char const	*begin_match;
	size_t		u;

	begin_match = s;
	u = 0;
	while (*s)
	{
		if (*s == c)
		{
			u++;
			begin_match = s + 1;
		}
		s++;
	}
	u++;
	return (u);
}

static char		*ft_split_one(char **tab, size_t *split_i,
		char const *s, size_t len)
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

static char		**ft_split_inn(char **tab, size_t *split_i,
		char const *s, char c)
{
	char const *begin_match;

	begin_match = s;
	while (*s)
	{
		if (*s == c)
		{
			if (!ft_split_one(tab, split_i, begin_match, s - begin_match))
				return (NULL);
			begin_match = s + 1;
		}
		s++;
	}
	if (!ft_split_one(tab, split_i, begin_match, s - begin_match))
		return (NULL);
	return (tab);
}

char			**ft_split(char const *s, char c)
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
