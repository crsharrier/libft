#include <string.h>
#include <stdio.h>
#include "../libft.h"

int main(void)
{
	int status;
	char 	src[] = "HelloWorld";
	char 	dest[11];
	size_t	size;

	memset(dest, 'A', 10);
	size = 0;

	printf("dest before = %s\n", dest);
	printf("strlen(src) = %lu\n", strlen(src));
	status = ft_strlcpy(dest, src, size);
	printf("ft_strlcpy(%s, %s, %zu) = %i\n",dest, src, size, status);
	printf("dest after = %s\n", dest);
	return (0);
}