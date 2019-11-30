/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 16:37:37 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:39:16 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

int		ft_max(int a, int b)
{
	return (a > b ? a : b);
}

double	ft_maxd(double a, double b)
{
	return (a > b ? a : b);
}
