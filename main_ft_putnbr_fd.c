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
	int		n;

	fd = open("test.txt", O_RDWR | O_CREAT, 0644);
	if (fd == -1)
	{
		printf("Error opening or creating file.\n");
		return (1);
	}
	n = -2147483648;
	ft_putnbr_fd(n, fd);
	write(fd, "\n", 1);
	close(fd);
	return (0);
}
