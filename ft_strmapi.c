#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new;
// CHECK THIS
	(void)len;
	if (!s)
		return (NULL);
	new = ft_strdup(s);
	if (!new)
		return (NULL);
	i = 0;
	while (new[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
