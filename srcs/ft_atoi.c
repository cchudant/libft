/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:15:01 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/09 10:15:04 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int res;
	int mul;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	mul = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mul = -1;
		str++;
	}
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (mul * res);
}
