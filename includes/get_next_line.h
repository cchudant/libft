/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:48:47 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/21 16:14:03 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct			s_buflst
{
	int					fd;
	struct s_buflst		*next;
	int					read_cursor;
	int					ret_cursor;
	char				buf[BUFFER_SIZE];
}						t_buflst;

int						get_next_line(int fd, char **line);

int						gnl_cpy_next_line(int fd, t_buflst **lst, char **dst);

#endif
