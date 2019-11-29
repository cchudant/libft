/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 00:34:14 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/29 01:02:08 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_min(t_vec2d v, double p)
{
	v.x = MIN(v.x, p);
	v.y = MIN(v.y, p);
	return (v);
}

t_vec2i			vec2i_min(t_vec2i v, int p)
{
	v.x = MIN(v.x, p);
	v.y = MIN(v.y, p);
	return (v);
}

t_vec3d			vec3d_min(t_vec3d v, double p)
{
	v.x = MIN(v.x, p);
	v.y = MIN(v.y, p);
	v.z = MIN(v.z, p);
	return (v);
}

t_vec3i			vec3i_min(t_vec3i v, int p)
{
	v.x = MIN(v.x, p);
	v.y = MIN(v.y, p);
	v.z = MIN(v.z, p);
	return (v);
}
