/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:58:02 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/09 12:58:06 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_write(int n, int negative, char *res, int b)
{
	size_t i;

	i = 0;
	if (negative)
		res[i++] = '-';
	while (b > 0)
	{
		res[i] = '0' + -(n / b % 10);
		i++;
		b /= 10;
	}
	res[i] = '\0';
}

char		*ft_itoa(int n)
{
	char	*res;
	int		b;
	size_t	len;
	int		negative;

	negative = n < 0;
	if (!negative)
		n = -n;
	b = 1;
	len = 1;
	while (n / b <= -10)
	{
		b *= 10;
		len++;
	}
	if (!(res = malloc(sizeof(char) * (len + 1 + (negative ? 1 : 0)))))
		return (NULL);
	ft_itoa_write(n, negative, res, b);
	return (res);
}
