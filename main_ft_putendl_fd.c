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

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		printf("Error opening or creating file.\n");
		return (1);
	}
	str = "Roses are red.\nViolets are blue.\nC is best.\n";
	ft_putendl_fd(str, fd);
	close(fd);
	return (0);
}
