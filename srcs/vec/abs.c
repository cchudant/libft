/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:32:17 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:43:05 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_abs(t_vec2d v)
{
	v.x = ft_absd(v.x);
	v.y = ft_absd(v.y);
	return (v);
}

t_vec2i			vec2i_abs(t_vec2i v)
{
	v.x = ft_abs(v.x);
	v.y = ft_abs(v.y);
	return (v);
}

t_vec3d			vec3d_abs(t_vec3d v)
{
	v.x = ft_absd(v.x);
	v.y = ft_absd(v.y);
	v.z = ft_absd(v.z);
	return (v);
}

t_vec3i			vec3i_abs(t_vec3i v)
{
	v.x = ft_abs(v.x);
	v.y = ft_abs(v.y);
	v.z = ft_abs(v.z);
	return (v);
}
