#include <ctype.h>
#include <stdio.h>

int	main()
{
	int		x;
	char	c;

	x = 4;
	c = '9';
	printf("%d\n", isprint(x));
	printf("%d\n", isprint(c));
}
