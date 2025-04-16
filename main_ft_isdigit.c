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
	printf("%d\n", isdigit(x));
	printf("%d\n", isdigit(y));
	printf("%d\n", isdigit(c));
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", ft_isdigit(y));
	printf("%d\n", ft_isdigit(c));
}
