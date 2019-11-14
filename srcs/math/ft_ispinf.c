/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispinf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:40:54 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 13:40:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

t_bool	ft_ispinf(double dbl)
{
	t_reinterpret_double n;

	n.d = dbl;
	return ((n.ll >> 52 & 0xfff) == 0x7ff &&
			(n.ll & 0xfffffffffffff) == 0);
}
