/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:34:14 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:43:45 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_min(t_vec2d v, double p)
{
	v.x = ft_mind(v.x, p);
	v.y = ft_mind(v.y, p);
	return (v);
}

t_vec2i			vec2i_min(t_vec2i v, int p)
{
	v.x = ft_min(v.x, p);
	v.y = ft_min(v.y, p);
	return (v);
}

t_vec3d			vec3d_min(t_vec3d v, double p)
{
	v.x = ft_mind(v.x, p);
	v.y = ft_mind(v.y, p);
	v.z = ft_mind(v.z, p);
	return (v);
}

t_vec3i			vec3i_min(t_vec3i v, int p)
{
	v.x = ft_min(v.x, p);
	v.y = ft_min(v.y, p);
	v.z = ft_min(v.z, p);
	return (v);
}
