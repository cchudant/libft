#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list **next;
	t_list *tmp;

	while (*lst)
	{
		next = &(*lst)->next;
		tmp = *lst;
		*lst = NULL;
		ft_lstdelone(tmp, del);
		lst = next;
	}
}
