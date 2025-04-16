#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
		((char *)ptr)[i++] = 0;
	return (ptr);
}
