#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && 
		(unsigned char)((char *)s1)[i] == (unsigned char)((char *)s2)[i])
	{
		i++;
	}
	return ((unsigned char)((char *)s1)[i] - (unsigned char)((char *)s2)[i]);
}
