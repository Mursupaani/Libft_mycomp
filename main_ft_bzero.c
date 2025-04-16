#include "libft.h"
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	s[] = "Hi! How are you?";
	char	s2[] = "Hi! How are you?";

	printf("%s\n", s);
	ft_bzero(s, sizeof(s));
	printf("%s\n", s);

	printf("%s\n", s2);
	ft_bzero(s2, sizeof(s2));
	printf("%s\n", s2);
	return (0);
}
