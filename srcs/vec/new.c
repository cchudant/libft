/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:22:09 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/26 16:21:21 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"


t_vec2d			vec2d_new(double x, double y)
{
	t_vec2d r;

	r.x = x;
	r.y = y;
	return (r);
}

t_vec2i			vec2i_new(int x, int y)
{
	t_vec2i r;

	r.x = x;
	r.y = y;
	return (r);
}

t_vec3d			vec3d_new(double x, double y, double z)
{
	t_vec3d r;

	r.x = x;
	r.y = y;
	r.z = z;
	return (r);
}

t_vec3i			vec3i_new(int x, int y, int z)
{
	t_vec3i r;

	r.x = x;
	r.y = y;
	r.z = z;
	return (r);
}
