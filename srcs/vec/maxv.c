/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:38:21 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/29 01:03:13 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_maxv(t_vec2d v, t_vec2d p)
{
	v.x = MAX(v.x, p.x);
	v.y = MAX(v.y, p.y);
	return (v);
}

t_vec2i			vec2i_maxv(t_vec2i v, t_vec2i p)
{
	v.x = MAX(v.x, p.x);
	v.y = MAX(v.y, p.y);
	return (v);
}

t_vec3d			vec3d_maxv(t_vec3d v, t_vec3d p)
{
	v.x = MAX(v.x, p.x);
	v.y = MAX(v.y, p.y);
	v.z = MAX(v.z, p.z);
	return (v);
}

t_vec3i			vec3i_maxv(t_vec3i v, t_vec3i p)
{
	v.x = MAX(v.x, p.x);
	v.y = MAX(v.y, p.y);
	v.z = MAX(v.z, p.z);
	return (v);
}
