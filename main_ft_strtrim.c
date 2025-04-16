#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	*s1 = "Hi! How are you?";
	char	*set = "Hi you!?";
	char	*trim;
	char	*s2 = "14532145781273465Hi! How are you?123468912349876214";
	char	*set2 = "123456789";
	char	*trim2;

	trim = ft_strtrim(s1, set);
	printf("s1:\t%s\n", s1);
	printf("set1:\t%s\n", set);
	printf("trim1:\t%s\n", trim);
	trim2 = ft_strtrim(s2, set2);
	printf("s2:\t%s\n", s2);
	printf("set2:\t%s\n", set2);
	printf("trim2:\t%s\n", trim2);
	return (0);
}
