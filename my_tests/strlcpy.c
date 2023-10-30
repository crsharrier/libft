#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int status;
	char src[] = "HelloWorld";
	char dest[11];
	memset(dest, 'A', 10);
	dest[10] = '\0';
	printf("Dest before = %s\n", dest);
	status = ft_strlcpy(dest, src, 2);
	printf("Dest after 1 = %s, status = %i\n", dest, status);
	printf("strlen(src) = %lu\n", strlen(src));
	return (0);
}