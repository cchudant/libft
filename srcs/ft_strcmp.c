/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:44:37 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/21 14:09:53 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (s1 == s2)
		return (0);
	if (!s1 || !s2)
		return (s1 ? ((unsigned char)*s1) : -((unsigned char)*s2));
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}
