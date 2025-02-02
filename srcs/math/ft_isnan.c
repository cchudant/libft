/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnan.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:39:29 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 13:39:31 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

t_bool	ft_isnan(double dbl)
{
	t_reinterpret_double n;

	n.d = dbl;
	return ((n.ll >> 52 & 0x7ff) == 0x7ff &&
			(n.ll & 0xfffffffffffff) != 0);
}
