#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *el;

	if (!(el = malloc(sizeof(t_list))))
		return (NULL);
	el->content = (char *) content;
	el->next = NULL;
	return (el);
}
