#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
#include <strings.h>

// ccc -lbsd main_ft_strnstr.c libft.a

int	main(void)
{
	char	str1[] = "Haroarw aaaare you?";
	char	*str2 = "are";
	char	*ret1;
	char	*ret2;
	char	*ret3;
	char	*ret4;

	ret1 = ft_strnstr(str1, str2, sizeof(str1));
	ret2 = strnstr(str1, str2, sizeof(str1));
	ret3 = ft_strnstr(str1, str2, 5);
	ret4 = strnstr(str1, str2, 5);
	printf("%s\n", ret1);
	printf("%s\n", ret2);
	printf("%s\n", ret3);
	printf("%s\n", ret4);
	return (0);
}
