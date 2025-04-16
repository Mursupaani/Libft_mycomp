#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str[] = "HI! How are YOU?";
	char	*str1;

	printf("%lu\n", strlen(str));
	printf("%lu\n", ft_strlen(str));
//	printf("%lu\n", strlen(str1));
//	printf("%lu\n", ft_strlen(str1));
	return (0);
	
}
