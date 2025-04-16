#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

char	test(unsigned int i, char c);
char	test2(unsigned int i, char c);

int	main(void)
{
	char	str[] = "Hi! How are you?";
	char	*new;

	new = ft_strmapi(str, &test);
	printf("%s\n", new);
	free(new);
	new = ft_strmapi(str, &test2);
	printf("%s\n", new);
	free(new);
	return (0);
}

char	test(unsigned int i, char c)
{
	if(i % 2 == 0)
		return (c);
	else
		return (c + 1);
}

char	test2(unsigned int i, char c)
{
	if(i != 0 && i % 3 == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c + 1);
	}
	return (c);
}
