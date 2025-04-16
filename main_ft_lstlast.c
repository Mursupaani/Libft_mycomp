#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <fcntl.h>

void	print_list(t_list *head);

int	main(void)
{
	t_list	*head;
	char	*str1;
	t_list	*node1;
	char	*str2;
	t_list	*node2;
	char	*str3;
	t_list	*last;

	str1 = "Howdy ho partner!";
	str2 = "Abracadabra!";
	str3 = "Simsalabim!";

	head = ft_lstnew(str1);
	node1 = ft_lstnew(str2);
	node2 = ft_lstnew(str3);
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	last = ft_lstlast(head);
	print_list(head);
	printf("\n");
	print_list(last);
	return (0);
}

void	print_list(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}

