/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:18:55 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 14:26:04 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strappend(char **dest, char const *s)
{
	size_t	i;
	size_t	j;
	size_t	l1;
	size_t	l2;
	char	*str;

	l1 = *dest == NULL ? 0 : ft_strlen(*dest);
	l2 = s == NULL ? 0 : ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (l1 + l2 + 1))))
	{
		free(*dest);
		*dest = NULL;
		return ;
	}
	i = 0;
	j = 0;
	while (l1 && (*dest)[j])
		str[i++] = (*dest)[j++];
	j = 0;
	while (l2 && s[j])
		str[i++] = s[j++];
	str[i] = '\0';
	free(*dest);
	*dest = str;
}
