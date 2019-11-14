/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isninf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:40:49 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 13:40:55 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

t_bool	ft_isninf(double dbl)
{
	t_reinterpret_double n;

	n.d = dbl;
	return ((n.ll >> 52 & 0xfff) == 0xfff &&
			(n.ll & 0xfffffffffffff) == 0);
}
