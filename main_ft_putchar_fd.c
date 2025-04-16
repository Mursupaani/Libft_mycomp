#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <fcntl.h>


int	main(void)
{
	int		fd;
	char	*str;

	fd = open("test.txt", O_RDWR | O_CREAT, 0644);
	if (fd == -1)
	{
		printf("Error opening or creating file.\n");
		return(1);
	}
	str = "Hi! How are you?\n";
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
	close(fd);
	return (0);
}
