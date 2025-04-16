#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	else
		if (*lst)
			new->next = *lst;
		*lst = new;
}
