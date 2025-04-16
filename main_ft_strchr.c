#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str[] = "HI! How are YOU?";
	char	*str1;
	char	*str2;

	printf("%s\n", str);
	str1 = ft_strchr(str, ' ');
	str2 = strchr(str, ' ');
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
	
}
