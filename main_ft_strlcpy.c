#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>

// ccc -lbsd main_ft_strlcpy.c libft.a

int	main(void)
{
	char	src[] = "Hi! How are you?";
	char	dest[20];
	char	dest2[20];
//	char	dest3[0];
	//char	dest4[0];
	size_t	d1_size;
	size_t	d2_size;
//	size_t	d3_size;
	//size_t	d4_size;

	d1_size = ft_strlcpy(dest, src, sizeof(dest));
	d2_size = strlcpy(dest2, src, sizeof(dest));
	printf("%s, size %lu\n", dest, d1_size);
	printf("%s, size %lu\n", dest2, d2_size);

/*
	dest3[0] = 0;
	printf("%s\n", dest3);
	d3_size = ft_strlcpy(dest3, src, sizeof(dest3));
	//strlcpy(dest4, src, sizeof(dest));
	printf("%s, size %lu\n", dest3, d3_size);
	//printf("%s\n", dest4);
	return (0);
*/	
}
