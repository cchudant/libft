/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_rgb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:53:28 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/14 14:53:57 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_vec3i	int_to_rgb(int rgb)
{
	return ((t_vec3i) {
		rgb >> 16 & 255,
		rgb >> 8 & 255,
		rgb & 255
	});
}
