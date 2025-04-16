#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ret = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		ret = (char *)&s[i];
	return (ret);
}
