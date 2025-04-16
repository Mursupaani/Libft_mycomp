#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str1[] = "How are you?";
	char	str2[] = "How am I?";
	int		cmp1;
	int		cmp2;
	int		cmp3;
	int		cmp4;

	cmp1 = ft_strncmp(str1, str2, 0);
	cmp2 = strncmp(str1, str2, 0);
	printf("%d\n", cmp1);
	printf("%d\n", cmp2);
	cmp3 = ft_strncmp(str1, str2, 9);
	cmp4 = strncmp(str1, str2, 9);
	printf("%d\n", cmp3);
	printf("%d\n", cmp4);
	return (0);
}
