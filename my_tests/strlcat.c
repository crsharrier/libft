#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int status;
	int size;
	char dest[30]; 
	char *src = (char *)"AAAAAAAAA";
	
	memset(dest, 0, 20);
	memset(dest, 'C', 5);

	printf("===== TEST1 =====\n");
	size = -1;
	printf("strlen(dest) = %lu\n", ft_strlen(dest));
	printf("strlen(src) = %lu\n", ft_strlen(src));
	printf("size = %i\n", size);
	printf("strlcat(%s, %s, %i)\n", dest, src, size);
	status = ft_strlcat(dest, src, size);
	printf("dest after = %s\n", dest);
	printf("status = %i", status);

	printf("\n");
	
	/*
	status = ft_strlcat(dest, src, 3);
	printf("Dest after 3 = %s, status = %i\n", dest, status);
	printf("strcmp(dest, \"BBBB\") = %i\n", strcmp(dest, "BBBB"));
	printf("\n");

	status = ft_strlcat(dest, src, 6);
	printf("Src = %s, Dest after 6 = %s, status = %i\n", src, dest, status);
	printf("strcmp(dest, \"BBBBA\") = %i\n", strcmp(dest, "BBBBA"));
*/
	return (0);
}