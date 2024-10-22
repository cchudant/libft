/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:01:01 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/10 12:37:33 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t i;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	i = 0;
	while (src[i] && size > 1 + i + dst_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len != size)
	{
		dst[dst_len + i] = '\0';
		return (dst_len + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}
