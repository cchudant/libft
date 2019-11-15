/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:39:44 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/15 09:01:26 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "bool.h"

# ifndef MAX
#  define MAX(X, Y) ({ typeof(X) x=(X); typeof(Y) y=(Y); (x>y)?x:y; })
# endif

# ifndef MIN
#  define MIN(X, Y) ({ typeof(X) x=(X); typeof(Y) y=(Y); (x<y)?x:y; })
# endif

# ifndef ABS
#  define ABS(X) ({ typeof(X) x=(X); x<0?-x:x; })
# endif

typedef union	u_reinterpret_double
{
	double		d;
	long long	ll;
}				t_reinterpret_double;

long long		ft_floor(double x);
long long		ft_ceil(double x);
long long		ft_round(double x);

t_bool			ft_isnan(double x);
t_bool			ft_ispinf(double x);
t_bool			ft_isninf(double x);

#endif
