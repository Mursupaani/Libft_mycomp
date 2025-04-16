#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <strings.h>
#include <fcntl.h>


int	main(void)
{
	t_list	*lst1;
	char	*str;
	t_list	*lst2;
	int		x;
	void	*ptr = NULL;
	
	str = "Hi! How are you?";
	lst1 = ft_lstnew(str);
	printf("%s\n", (char *)lst1->content);
	printf("%p\n", lst1);
	printf("%d\n", *(int *)lst1->next);
	x = 42;
	lst2 = ft_lstnew(&x);
	printf("%d\n", *(int *)lst2->content);
	printf("%d\n", *(int *)lst2->next);
	printf("%p\n", ptr);
	free(lst1);
	free(lst2);
	return (0);
}
