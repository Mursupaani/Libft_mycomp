#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str1[] = "How are you?";
	char	*ret1;
	char	*ret2;
	char	*ret3;
	char	*ret4;

	ret1 = ft_memchr(str1, '\0', sizeof(str1));
	ret2 = memchr(str1, '\0', sizeof(str1));
	ret3 = ft_memchr(str1, ' ', sizeof(str1));
	ret4 = memchr(str1, ' ', sizeof(str1));
	printf("%s\n", ret1);
	printf("%s\n", ret2);
	printf("%s\n", ret3);
	printf("%s\n", ret4);
	return (0);
}
