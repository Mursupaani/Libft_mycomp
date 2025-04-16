#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	int		x;
	float	y;
	char	c;

	x = 4;
	y = 4.2;
	c = '9';
	printf("%d\n", isalnum(x));
	printf("%d\n", isalnum(y));
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(x));
	printf("%d\n", ft_isalnum(y));
	printf("%d\n", ft_isalnum(c));
}
