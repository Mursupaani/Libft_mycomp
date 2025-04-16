#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

int	main(void)
{
	char	str1[] = "Hi! How are you?";
	char	str2[] = "Hi! How are you?";
	int 	i;
	int 	j;

	printf("%s\n", str1);
	printf("%s\n", str2);
	i = 0;
	while (str1[i])
	{
		str1[i] = ft_toupper(str1[i]);
		i++;
	}
	j = 0;
	while (str2[j])
	{
		str2[j] = toupper(str2[j]);
		j++;
	}
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
	
}
