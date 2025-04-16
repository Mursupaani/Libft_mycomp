#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	char	c;
	char	d;

	c = 'c';
	d = '8';
	printf("%d\n", isalpha(c));
	printf("%d\n", isalpha(d));
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(d));
}
