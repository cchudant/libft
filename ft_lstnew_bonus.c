/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchudant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:22:34 by cchudant          #+#    #+#             */
/*   Updated: 2019/10/09 12:59:58 by cchudant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *el;

	if (!(el = malloc(sizeof(t_list))))
		return (NULL);
	el->content = (void *)content;
	el->next = NULL;
	return (el);
}
