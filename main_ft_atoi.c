#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

int main(void) {
	char str1[] = "\t\n\v\f\r      +0123456789";
	char *str2 = "-2147483648";
	int ret1;
	int ret2;
	int ret3;
	int ret4;

	ret1 = ft_atoi(str1);
	ret2 = atoi(str1);
	ret3 = ft_atoi(str2);
	ret4 = atoi(str2);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("%d\n", ret3);
	printf("%d\n", ret4);
	return (0);
}
