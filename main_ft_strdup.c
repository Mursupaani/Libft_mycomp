#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	str[] = "Hi! How are you?";
	char	*cp1;
	char	*cp2;
//	char	*str2 = NULL;
//	char	*cp3;
//	char	*cp4;

	cp1 = ft_strdup(str);
	cp2 = strdup(str);
	printf("%s\n", cp1);
	printf("%s\n", cp2);
//	cp3 = ft_strdup(str2);
//	cp4 = strdup(str2);
//	printf("%s\n", cp3);
//	printf("%s\n", cp4);
	return (0);
}
