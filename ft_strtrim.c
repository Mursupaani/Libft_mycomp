#include "libft.h"

int	check_set(char const c1, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ret_str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (check_set(*s1, set))
			s1++;
		else
			break ;
	}
	len = ft_strlen(s1);
	while (len--)
	{
		if (!check_set(*(s1 + len - 1), set))
			break ;
	}
	ret_str = (char *)malloc(sizeof(char) * len + 1);
	if (!ret_str)
		return (NULL);
	ft_strlcpy(ret_str, s1, (len + 1));
	return (ret_str);
}

int	check_set(char const c1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c1 == set[i])
			return (1);
		i++;
	}
	return (0);
}
