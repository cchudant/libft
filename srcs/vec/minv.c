/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:38:21 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:44:00 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_minv(t_vec2d v, t_vec2d p)
{
	v.x = ft_mind(v.x, p.x);
	v.y = ft_mind(v.y, p.y);
	return (v);
}

t_vec2i			vec2i_minv(t_vec2i v, t_vec2i p)
{
	v.x = ft_min(v.x, p.x);
	v.y = ft_min(v.y, p.y);
	return (v);
}

t_vec3d			vec3d_minv(t_vec3d v, t_vec3d p)
{
	v.x = ft_mind(v.x, p.x);
	v.y = ft_mind(v.y, p.y);
	v.z = ft_mind(v.z, p.z);
	return (v);
}

t_vec3i			vec3i_minv(t_vec3i v, t_vec3i p)
{
	v.x = ft_min(v.x, p.x);
	v.y = ft_min(v.y, p.y);
	v.z = ft_min(v.z, p.z);
	return (v);
}
