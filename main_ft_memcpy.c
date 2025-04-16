#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char	dst[10];
	char	dst2[10];
	char	src[] = "Hi! How are you?";
	char	src2[] = "Hi! How are you?";

	ft_memcpy(dst, src, 10);
	memcpy(dst2, src2, 10);
	printf("%s\n", dst);
	printf("%s\n", dst2);
	ft_memcpy(&src[5], src, 5);
	memcpy(&src2[5], src2, 5);
	printf("%s\n", src);
	printf("%s\n", src2);
//	ft_memcpy(dst, src, 21);
//	ft_memcpy(dst2, src, 21);
//	printf("%s\n", dst);
//	printf("%s\n", dst2);
	/*
	ft_memcpy(dst2, src, 21);
	ft_memcpy(dst, src, 21);
	printf("%s\n", dst2);
	printf("%s\n", dst);
	*/
	return (0);
	
}
