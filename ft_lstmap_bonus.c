/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:37:19 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/17 14:17:25 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *tmp;
	t_list *new_lst;
	t_list *current_node;

	new_lst = NULL;
	current_node = NULL;
	while (lst)
	{
		if (!(tmp = malloc(sizeof(t_list))))
			return (NULL);
		if (f)
			tmp->content = (*f)(lst->content);
		else
			tmp->content = lst->content;
		tmp->next = NULL;
		if (!new_lst)
			new_lst = tmp;
		else
			current_node->next = tmp;
		current_node = tmp;
		lst = lst->next;
	}
	return (new_lst);
}
