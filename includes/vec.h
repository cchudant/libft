/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:08:20 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/29 00:41:40 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

# include "math.h"

typedef struct	s_vec2d {
	double		x;
	double		y;
}				t_vec2d;

typedef struct	s_vec2i {
	int			x;
	int			y;
}				t_vec2i;

typedef struct	s_vec3d {
	double		x;
	double		y;
	double		z;
}				t_vec3d;

typedef struct	s_vec3i {
	int			x;
	int			y;
	int			z;
}				t_vec3i;

t_vec2d			vec2d_from(t_vec2i v);
t_vec2i			vec2i_from(t_vec2d v);
t_vec3d			vec3d_from(t_vec3i v);
t_vec3i			vec3i_from(t_vec3d v);

t_vec2d			vec2d_add(t_vec2d v, double p);
t_vec2i			vec2i_add(t_vec2i v, int p);
t_vec3d			vec3d_add(t_vec3d v, double p);
t_vec3i			vec3i_add(t_vec3i v, int p);

t_vec2d			vec2d_sub(t_vec2d v, double p);
t_vec2i			vec2i_sub(t_vec2i v, int p);
t_vec3d			vec3d_sub(t_vec3d v, double p);
t_vec3i			vec3i_sub(t_vec3i v, int p);

t_vec2d			vec2d_addv(t_vec2d v, t_vec2d p);
t_vec2i			vec2i_addv(t_vec2i v, t_vec2i p);
t_vec3d			vec3d_addv(t_vec3d v, t_vec3d p);
t_vec3i			vec3i_addv(t_vec3i v, t_vec3i p);

t_vec2d			vec2d_subv(t_vec2d v, t_vec2d p);
t_vec2i			vec2i_subv(t_vec2i v, t_vec2i p);
t_vec3d			vec3d_subv(t_vec3d v, t_vec3d p);
t_vec3i			vec3i_subv(t_vec3i v, t_vec3i p);

t_vec2d			vec2d_mul(t_vec2d v, double p);
t_vec2i			vec2i_mul(t_vec2i v, int p);
t_vec3d			vec3d_mul(t_vec3d v, double p);
t_vec3i			vec3i_mul(t_vec3i v, int p);

t_vec2d			vec2d_mulv(t_vec2d v, t_vec2d p);
t_vec2i			vec2i_mulv(t_vec2i v, t_vec2i p);
t_vec3d			vec3d_mulv(t_vec3d v, t_vec3d p);
t_vec3i			vec3i_mulv(t_vec3i v, t_vec3i p);

t_vec2d			vec2d_abs(t_vec2d v);
t_vec2i			vec2i_abs(t_vec2i v);
t_vec3d			vec3d_abs(t_vec3d v);
t_vec3i			vec3i_abs(t_vec3i v);

t_vec2d			vec2d_inv(t_vec2d v);
t_vec3d			vec3d_inv(t_vec3d v);

t_vec2d			vec2d_div(t_vec2d v, double p);
t_vec2i			vec2i_div(t_vec2i v, int p);
t_vec3d			vec3d_div(t_vec3d v, double p);
t_vec3i			vec3i_div(t_vec3i v, int p);

t_vec2d			vec2d_divv(t_vec2d v, t_vec2d p);
t_vec2i			vec2i_divv(t_vec2i v, t_vec2i p);
t_vec3d			vec3d_divv(t_vec3d v, t_vec3d p);
t_vec3i			vec3i_divv(t_vec3i v, t_vec3i p);

t_vec2d			vec2d_min(t_vec2d v, double p);
t_vec2i			vec2i_min(t_vec2i v, int p);
t_vec3d			vec3d_min(t_vec3d v, double p);
t_vec3i			vec3i_min(t_vec3i v, int p);

t_vec2d			vec2d_minv(t_vec2d v, t_vec2d p);
t_vec2i			vec2i_minv(t_vec2i v, t_vec2i p);
t_vec3d			vec3d_minv(t_vec3d v, t_vec3d p);
t_vec3i			vec3i_minv(t_vec3i v, t_vec3i p);

t_vec2d			vec2d_max(t_vec2d v, double p);
t_vec2i			vec2i_max(t_vec2i v, int p);
t_vec3d			vec3d_max(t_vec3d v, double p);
t_vec3i			vec3i_max(t_vec3i v, int p);

t_vec2d			vec2d_maxv(t_vec2d v, t_vec2d p);
t_vec2i			vec2i_maxv(t_vec2i v, t_vec2i p);
t_vec3d			vec3d_maxv(t_vec3d v, t_vec3d p);
t_vec3i			vec3i_maxv(t_vec3i v, t_vec3i p);

#endif
