/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:00:25 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/09 13:00:35 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *found;

	found = NULL;
	while (*s)
	{
		if (*s == c)
			found = (char *)s;
		s++;
	}
	return (c == '\0' ? (char *)s : found);
}
