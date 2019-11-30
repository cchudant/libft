/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:34:14 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:44:26 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_max(t_vec2d v, double p)
{
	v.x = ft_maxd(v.x, p);
	v.y = ft_maxd(v.y, p);
	return (v);
}

t_vec2i			vec2i_max(t_vec2i v, int p)
{
	v.x = ft_max(v.x, p);
	v.y = ft_max(v.y, p);
	return (v);
}

t_vec3d			vec3d_max(t_vec3d v, double p)
{
	v.x = ft_maxd(v.x, p);
	v.y = ft_maxd(v.y, p);
	v.z = ft_maxd(v.z, p);
	return (v);
}

t_vec3i			vec3i_max(t_vec3i v, int p)
{
	v.x = ft_max(v.x, p);
	v.y = ft_max(v.y, p);
	v.z = ft_max(v.z, p);
	return (v);
}
