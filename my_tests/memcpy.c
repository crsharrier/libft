#include<stdio.h>
#include<string.h>
#include "../libft.h"
#include"testing.h"

int	main()
{
	//int i;
    int pass;
	char *src;
	char dest_buffer[11];
	char ft_dest_buffer[11];

    pass = 1;
	//i = 0;
	src = "helloWorld";

	/*printf("dest_buffer before = ");
	while(i < 11)
		printf("%c", dest_buffer[i++]);
	printf("\n");
	i = 0;*/
	memcpy(dest_buffer, src, 11);
	/*printf("dest_buffer after memcpy(dest_buffer, src, 11) = ");
	while(i < 10)
		printf("%c", dest_buffer[i++]);
	printf("\n");

	printf("ft_dest_buffer before = ");
	while(i < 11)
		printf("%c", ft_dest_buffer[i++]);
	printf("\n");
	i = 0;*/
	ft_memcpy(ft_dest_buffer, src, 11);
	/*printf("ft_dest_buffer after memcpy(ft_dest_buffer, src, 11) = ");
	while(i < 10)
		printf("%c", ft_dest_buffer[i++]);
	printf("\n");*/

    if (strncmp(dest_buffer, ft_dest_buffer, 11) != 0)
        pass = 0;
    ok_ko("memcpy", pass);

	return(0);
}
