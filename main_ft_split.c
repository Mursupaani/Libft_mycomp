#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	*s1 = "___Hi!_How____are__you?___";
	char 	**array;
	char	c = '_';
	int		i;

	printf("s1:\t%s\n", s1);
	printf("c:\t'%c'\n", c);
	array = ft_split(s1, c);
	i = 0;
	while (*array)
	{
		printf("sub%d:\t%s\n", i++, *array);
		array++;
	}
	return (0);
}

