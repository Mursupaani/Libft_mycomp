#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <bsd/string.h>

// ccc -lbsd main_ft_strlcat.c libft.a

int	main(void)
{
	char	src[] = "How are you?";
	char	dest[50] = "Hi! ";
	char	dest2[50] = "Hi! ";
	char	dest3[] = "Hi!";
	char	dest4[] = "Hi!";
	size_t	d1_size;
	size_t	d2_size;
	size_t	d3_size;
	size_t	d4_size;

	d1_size = ft_strlcat(dest, src, sizeof(dest));
	d2_size = strlcat(dest2, src, sizeof(dest));
	printf("%s, size %lu\n", dest, d1_size);
	printf("%s, size %lu\n", dest2, d2_size);

	d3_size = ft_strlcat(dest3, src, sizeof(dest3));
	d4_size = strlcat(dest4, src, sizeof(dest4));
	printf("%s, size %lu\n", dest3, d3_size);
	printf("%s, size %lu\n", dest4, d4_size);
	return (0);
	
}
