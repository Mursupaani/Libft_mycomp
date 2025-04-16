#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

void	test(unsigned int i, char *c);
void	test2(unsigned int i, char *c);

int	main(void)
{
	char	str[] = "Hi! How are you?";

	printf("%s\n", str);
	ft_striteri(str, &test);
	printf("\n");
	ft_striteri(str, &test2);
	printf("%s\n", str);
	return (0);
}

void	test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		write(1, c, 1);
}

void	test2(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
