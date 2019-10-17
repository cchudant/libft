/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:33:50 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/17 14:15:29 by cchudant         ###   ########.fr       */
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
		if (del)
			(*del)((*lst)->content);
		*lst = NULL;
		free(tmp);
		lst = next;
	}
}
