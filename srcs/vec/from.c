/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:13:16 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/15 06:21:18 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_from(t_vec2i v)
{
	t_vec2d r;

	r.x = (double)v.x;
	r.y = (double)v.y;
	return (r);
}

t_vec2i			vec2i_from(t_vec2d v)
{
	t_vec2i r;

	r.x = (int)v.x;
	r.y = (int)v.y;
	return (r);
}

t_vec3d			vec3d_from(t_vec3i v)
{
	t_vec3d r;

	r.x = (double)v.x;
	r.y = (double)v.y;
	r.z = (double)v.z;
	return (r);
}

t_vec3i			vec3i_from(t_vec3d v)
{
	t_vec3i r;

	r.x = (int)v.x;
	r.y = (int)v.y;
	r.z = (int)v.z;
	return (r);
}
