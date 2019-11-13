/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:06:35 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/07 15:10:23 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_buf;
	unsigned char	*src_buf;
	size_t			i;

	dst_buf = (unsigned char *)dst;
	src_buf = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_buf[i] = src_buf[i];
		if (src_buf[i] == c)
			return (&dst_buf[i + 1]);
		i++;
	}
	return (NULL);
}
