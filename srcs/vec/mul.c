/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:28:46 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/26 14:40:46 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec2d			vec2d_mul(t_vec2d v, double p)
{
	v.x *= p;
	v.y *= p;
	return (v);
}

t_vec2i			vec2i_mul(t_vec2i v, int p)
{
	v.x *= p;
	v.y *= p;
	return (v);
}

t_vec3d			vec3d_mul(t_vec3d v, double p)
{
	v.x *= p;
	v.y *= p;
	v.z *= p;
	return (v);
}

t_vec3i			vec3i_mul(t_vec3i v, int p)
{
	v.x *= p;
	v.y *= p;
	v.z *= p;
	return (v);
}

