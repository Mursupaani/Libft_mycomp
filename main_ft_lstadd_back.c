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
	t_list	*node1;
	char	*str1;
	t_list	*node2;
	char	*str2;
	t_list	*node3;
	char	*str3;

	str1 = "Howdy ho partner!";
	str2 = "Abracadabra!";
	str3 = "Simsalabim!";
	head = NULL;
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	print_list(head);
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

