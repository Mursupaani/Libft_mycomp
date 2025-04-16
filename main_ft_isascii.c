#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main()
{
	int		x;
	char	c;
	int		y;

	x = 4;
	c = '9';
	y = 256;
	printf("%d\n", isascii(x));
	printf("%d\n", isascii(c));
	printf("%d\n", isascii(y));
	printf("%d\n", ft_isascii(x));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(y));
}
