/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:39:44 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/30 16:42:26 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "bool.h"

typedef union	u_reinterpret_double
{
	double		d;
	long long	ll;
}				t_reinterpret_double;

int				ft_abs(int v);
int				ft_min(int a, int b);
int				ft_max(int a, int b);

double			ft_absd(double v);
double			ft_mind(double a, double b);
double			ft_maxd(double a, double b);

long long		ft_floor(double x);
long long		ft_ceil(double x);
long long		ft_round(double x);

t_bool			ft_isnan(double x);
t_bool			ft_ispinf(double x);
t_bool			ft_isninf(double x);

#endif
