#include "libft.h"

/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*temp;
	int		size;
	int		i;

	if (!lst || !f || !del)
		return (NULL);
	map = ft_lstnew(ft_memcpy(map->content, lst->content));
	if (!map)
		return (NULL);
	count = ft_lstsize(lst);
	i = 0;
	while (i < size)
	{
		temp = ft_lstnew();
		if (!temp)
		{
			ft_lstclear(map, del);
			return (NULL);
		}
	}
}
*/
/*
Parameters
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete
the content of a node if needed.

Return value
The new list.
NULL if the allocation fails.

External functs. malloc, free

Description
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.o*/
