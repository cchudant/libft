/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:12:43 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/13 16:27:19 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	cpy_stop_newline(int first, char **dst_ptr, char *src, int len)
{
	int i;

	i = 0;
	if (first && src[i] == '\n')
		i++;
	while (src[i] != '\n' && i < len)
	{
		**dst_ptr = src[i];
		(*dst_ptr)++;
		i++;
	}
	return (i);
}

static void	cpy_next_line_next_gc(t_buflst ***lst)
{
	t_buflst *tmp;

	if ((**lst)->ret_cursor >= BUFFER_SIZE)
	{
		tmp = **lst;
		**lst = (**lst)->next;
		free(tmp);
	}
	else
		*lst = &(**lst)->next;
}

static int	cpy_next_line_len(int fd, t_buflst **lst)
{
	int		len;

	len = 0;
	while (*lst)
	{
		if ((*lst)->fd == fd)
			len += (*lst)->read_cursor - (*lst)->ret_cursor;
		lst = &(*lst)->next;
	}
	return (len);
}

int			gnl_cpy_next_line(int fd, t_buflst **lst, char **dst)
{
	int			len;
	char		*dst_ptr;
	int			first;

	len = cpy_next_line_len(fd, lst);
	if (!(*dst = malloc(sizeof(char) * (len + 1))))
		return (-1);
	dst_ptr = *dst;
	first = 1;
	while (*lst)
	{
		if ((*lst)->fd == fd)
		{
			(*lst)->ret_cursor += cpy_stop_newline(first, &dst_ptr,
					&(*lst)->buf[(*lst)->ret_cursor],
					(*lst)->read_cursor - (*lst)->ret_cursor);
			first = 0;
		}
		cpy_next_line_next_gc(&lst);
	}
	*dst_ptr = '\0';
	return (len);
}
