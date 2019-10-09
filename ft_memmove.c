/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:06:47 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/09 10:02:00 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_buf;
	unsigned char	*src_buf;
	size_t			i;

	dst_buf = (unsigned char *)dst;
	src_buf = (unsigned char *)src;
	if (src == dst)
		return (dst);
	i = 0;
	while (i < len)
	{
		if (src > dst)
			dst_buf[i] = src_buf[i];
		else
			dst_buf[len - i - 1] = src_buf[len - i - 1];
		i++;
	}
	return (dst);
}
