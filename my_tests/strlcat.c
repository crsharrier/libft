#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int status;
	char dest[30]; 
	char *src = (char *)"HelloWorld";
	

	memset(dest, 0, 30);
	memset(dest, 'B', 4);
	dest[0] = 'B';

	printf("Dest before = %s\n", dest);
	printf("strlen(src) = %lu\n", strlen(src));
	printf("\n");
	
	status = ft_strlcat(dest, src, 3);
	printf("Dest after 3 = %s, status = %i\n", dest, status);
	printf("Dest = %s\n", dest);
	printf("strcmp(dest, \"BBBB\") = %i\n", strcmp(dest, "BBBB"));
	printf("\n");

	status = ft_strlcat(dest, src, 6);
	printf("Dest after 6 = %s, status = %i\n", dest, status);
	printf("Dest = %s\n", dest);
	printf("strcmp(dest, \"BBBBH\") = %i\n", strcmp(dest, "BBBBH"));
	return (0);
}