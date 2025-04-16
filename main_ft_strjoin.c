#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "Hi! How are you?";
	char	*str2 = " Long time, no sea!";
	char	*str3 = " Are you still working?";
	char	*join;
	char	*join2;

	join = ft_strjoin(str, str2);
	join2 = ft_strjoin(join, str3);
	printf("%s\n", join2);
	return (0);
}
