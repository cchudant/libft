/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:25:31 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/29 00:04:24 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_add(t_vec2d v, double p)
{
	v.x += p;
	v.y += p;
	return (v);
}

t_vec2i			vec2i_add(t_vec2i v, int p)
{
	v.x += p;
	v.y += p;
	return (v);
}

t_vec3d			vec3d_add(t_vec3d v, double p)
{
	v.x += p;
	v.y += p;
	v.z += p;
	return (v);
}

t_vec3i			vec3i_add(t_vec3i v, int p)
{
	v.x += p;
	v.y += p;
	v.z += p;
	return (v);
}
