#include "libft.h"

char	*ft_strdup(const char *s)
{
	char 	*cp;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	cp = (char *)malloc(sizeof(char) * len + 1);
	if (!cp)
		return (NULL);
	ft_memcpy(cp, s, len);
	cp[len] = '\0';
	return (cp);
}
