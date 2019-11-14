/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_startswith.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:18:38 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 15:20:49 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_startswith(const char *str, const char *start)
{
	size_t i;

	i = 0;
	while (start[i])
	{
		if (start[i] != str[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
