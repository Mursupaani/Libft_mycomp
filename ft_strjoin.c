#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ret_str;
	size_t	tot_len;

	if (!s1 || !s2)
		return (NULL);
	tot_len = ft_strlen(s1) + ft_strlen(s2);
	ret_str = (char *)malloc(sizeof(char) * tot_len + 1);
	if (!ret_str)
		return (NULL);
	ft_strlcpy(ret_str, s1, tot_len + 1);
	ft_strlcat(ret_str, s2, tot_len + 1);
	return (ret_str);
}
