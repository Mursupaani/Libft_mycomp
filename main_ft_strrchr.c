#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str[] = "HI! How are You?";
	char	*str1;
	char	*str2;

	printf("%s\n", str);
	str1 = ft_strrchr(str, 'o');
	str2 = strrchr(str, 'o');
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
	
}
