#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str[] = "HI! How are you today?";
	char	*cp1;
	char	*cp2;
	char	*cp3;
	char	*str2 = NULL;
	char	*cp4;

	cp1 = ft_substr(str, 0, sizeof(str));
	cp2 = ft_substr(str, 4, 3);
	cp3 = ft_substr(str, 23, 3);
	cp4 = ft_substr(str2, 0, sizeof(str2));
	printf("%s\n", cp1);
	printf("%s\n", cp2);
	printf("%s\n", cp3);
	printf("%s\n", cp4);
	return (0);
}
