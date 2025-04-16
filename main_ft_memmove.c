#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	src[] = "123456789";
	char	src2[] = "123456789";
	char	src3[] = "123456789";
	char	src4[] = "123456789";

	ft_memmove(&src[1], src, 8);
	memmove(&src2[1], src2, 8);
	printf("%s\n", src);
	printf("%s\n", src2);

	ft_memmove(src3, &src3[1], 8);
	memmove(src4, &src4[1], 8);
	printf("%s\n", src3);
	printf("%s\n", src4);
	return (0);
	
}
