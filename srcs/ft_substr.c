/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:59:23 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/10 11:42:47 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	rl_len;

	if (start >= (unsigned int)ft_strlen(s))
		rl_len = 0;
	else
	{
		rl_len = 0;
		while (s[start + rl_len] && rl_len < len)
			rl_len++;
	}
	if (!(str = malloc(sizeof(char) * (rl_len + 1))))
		return (NULL);
	i = 0;
	while (i < rl_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
