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
	int		size;
	
	str1 = "Howdy ho partner!";
	str2 = "Abracadabra!";
	str3 = "Simsalabim!";

	head = NULL;
	size = ft_lstsize(head);
	printf("List size is %d\n", size);
	printf("\n");

	head = ft_lstnew(str1);
	print_list(head);
	size = ft_lstsize(head);
	printf("List size is %d\n", size);
	printf("\n");

	node1 = ft_lstnew(str2);
	ft_lstadd_front(&head, node1);
	print_list(head);
	size = ft_lstsize(head);
	printf("List size is %d\n", size);
	printf("\n");

	node2 = ft_lstnew(str3);
	ft_lstadd_front(&head, node2);
	print_list(head);
	size = ft_lstsize(head);
	printf("List size is %d\n", size);
	printf("\n");
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

