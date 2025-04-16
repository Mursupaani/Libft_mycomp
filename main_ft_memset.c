#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "Hi! How are you?";
	char	s2[3] = "";
	char	*s3;
	int 	c = 'I';
	size_t	len = 5;
	size_t	len2 = 2;

	s3 = NULL;
	printf("%s\n", s);
	printf("%s\n", (char *)ft_memset(s, c, len));
	printf("%s\n", (char *)memset(s, c, len));
	printf("%s\n", (char *)ft_memset(s2, c, len2));
	printf("%s\n", (char *)memset(s2, c, len2));
//	printf("%s\n", (char *)ft_memset(s3, c, len));
//	printf("%s\n", (char *)memset(s3, c, len));
	return (0);
}
