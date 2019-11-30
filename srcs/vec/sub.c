/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 16:49:40 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:49:41 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_sub(t_vec2d v, double p)
{
	v.x -= p;
	v.y -= p;
	return (v);
}

t_vec2i			vec2i_sub(t_vec2i v, int p)
{
	v.x -= p;
	v.y -= p;
	return (v);
}

t_vec3d			vec3d_sub(t_vec3d v, double p)
{
	v.x -= p;
	v.y -= p;
	v.z -= p;
	return (v);
}

t_vec3i			vec3i_sub(t_vec3i v, int p)
{
	v.x -= p;
	v.y -= p;
	v.z -= p;
	return (v);
}
