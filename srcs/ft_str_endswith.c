/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_endswith.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:15:30 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 15:22:45 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_endswith(const char *str, const char *end)
{
	size_t i;
	size_t len;
	size_t endlen;

	len = ft_strlen(str);
	endlen = ft_strlen(end);
	i = 0;
	while (end[i])
	{
		if (end[i] != str[len - endlen + i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
