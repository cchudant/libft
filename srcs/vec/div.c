/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:42:04 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/26 15:44:00 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_div(t_vec2d v, double p)
{
	v.x /= p;
	v.y /= p;
	return (v);
}

t_vec2i			vec2i_div(t_vec2i v, int p)
{
	v.x /= p;
	v.y /= p;
	return (v);
}

t_vec3d			vec3d_div(t_vec3d v, double p)
{
	v.x /= p;
	v.y /= p;
	v.z /= p;
	return (v);
}

t_vec3i			vec3i_div(t_vec3i v, int p)
{
	v.x /= p;
	v.y /= p;
	v.z /= p;
	return (v);
}
