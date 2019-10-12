/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:33:50 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/12 10:36:15 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list **next;
	t_list *tmp;

	while (*lst)
	{
		next = &(*lst)->next;
		tmp = *lst;
		(*del)((*lst)->content);
		*lst = NULL;
		free(tmp);
		lst = next;
	}
}
