#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	str_size;

	str_size = 0;
	i = 0;
	while (dst[i])
	{
		i++;
		str_size++;
	}
	j = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[j])
		{
			dst[i++] = src[j++];		
			str_size++;
		}
		dst[i] = '\0';
	}
	while (src[j])
	{
		j++;
		str_size++;
	}
	return (str_size);
}
