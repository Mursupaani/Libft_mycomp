#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

void	print_content(int *ptr, int len);

int	main(void)
{
	int	*array1;
	int	*array2;
	int	count;
	int	i;

	count = 5;
	array1 = (int *)ft_calloc(count, sizeof(int));
	array2 = (int *)calloc(count, sizeof(int));
	print_content(array1, count);
	print_content(array2, count);
	i = 0;
	while (i < count)
	{
		array1[i] = i;
		array2[i] = i;
		i++;
	}
	print_content(array1, count);
	print_content(array2, count);
	return (0);
}

void	print_content(int *ptr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d", ptr[i]);
		i++;
		if (i != len)
			printf(", ");
	}
	printf("\n");
}
