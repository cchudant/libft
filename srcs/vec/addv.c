/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:27:34 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 13:42:39 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_addv(t_vec2d v, t_vec2d p)
{
	v.x += p.x;
	v.y += p.y;
	return (v);
}

t_vec2i			vec2i_addv(t_vec2i v, t_vec2i p)
{
	v.x += p.x;
	v.y += p.y;
	return (v);
}

t_vec3d			vec3d_addv(t_vec3d v, t_vec3d p)
{
	v.x += p.x;
	v.y += p.y;
	v.z += p.z;
	return (v);
}

t_vec3i			vec3i_addv(t_vec3i v, t_vec3i p)
{
	v.x += p.x;
	v.y += p.y;
	v.z += p.z;
	return (v);
}
