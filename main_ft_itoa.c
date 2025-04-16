#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int		x;
	int		y;
	int		z;

	x = -2147483648;
	y = (unsigned char)'\xFF';
	z = 0;
	printf("%s\n", ft_itoa(x));
	printf("%s\n", ft_itoa(y));
	printf("%s\n", ft_itoa(z));
	return (0);
}
