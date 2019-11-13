/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:55:17 by cchudant          #+#    #+#             */
/*   Updated: 2019/11/13 16:05:57 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		find_new_line(char *buf, int len, int first)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (!(i == 0 && first) && buf[i] == '\n')
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

static t_buflst	*new_buf(int fd)
{
	t_buflst *lst;

	if (!(lst = malloc(sizeof(t_buflst))))
		return (NULL);
	lst->fd = fd;
	lst->next = NULL;
	lst->read_cursor = 0;
	lst->ret_cursor = 0;
	return (lst);
}

static t_buflst	*get_buf_for(int fd, t_buflst **buflst)
{
	t_buflst **lst;

	lst = buflst;
	while (*lst)
	{
		if ((*lst)->fd == fd && (*lst)->read_cursor < BUFFER_SIZE)
			return (*lst);
		lst = &(*lst)->next;
	}
	*lst = new_buf(fd);
	return (*lst);
}

static t_buflst	*find_new_line_lst(int fd, t_buflst *lst)
{
	int first;

	first = 1;
	while (lst)
	{
		if (lst->fd == fd)
		{
			if (find_new_line(&lst->buf[lst->ret_cursor],
					lst->read_cursor - lst->ret_cursor, first) >= 0)
				return (lst);
			first = 0;
		}
		lst = lst->next;
	}
	return (NULL);
}

int				get_next_line(int fd, char **line)
{
	static t_buflst	*buflst = NULL;
	t_buflst		*curbuf;
	int				nread;

	if (find_new_line_lst(fd, buflst))
		return (gnl_cpy_next_line(fd, &buflst, line) >= 0 ? 1 : -1);
	curbuf = get_buf_for(fd, &buflst);
	while (curbuf && (nread = read(fd, &curbuf->buf[curbuf->read_cursor],
			BUFFER_SIZE - curbuf->read_cursor)) > 0)
	{
		curbuf->read_cursor += nread;
		if (find_new_line_lst(fd, buflst))
			return (gnl_cpy_next_line(fd, &buflst, line) >= 0 ? 1 : -1);
		if (curbuf->read_cursor >= BUFFER_SIZE &&
				!(curbuf = get_buf_for(fd, &buflst)))
			return (-1);
	}
	if (!curbuf || nread < 0)
		return (-1);
	return (gnl_cpy_next_line(fd, &buflst, line) >= 0 ? 0 : -1);
}
