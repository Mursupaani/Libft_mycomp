#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str1[] = "Hop are you?";
	char	str2[] = "How are you?";
	int		ret1;
	int		ret2;
	int		ret3;
	int		ret4;

	ret1 = ft_memcmp(str1, str2, sizeof(str1));
	ret2 = memcmp(str1, str2, sizeof(str1));
	ret3 = ft_memcmp(str1, str2, 0);
	ret4 = memcmp(str1, str2, 0);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("%d\n", ret3);
	printf("%d\n", ret4);
	return (0);
}
