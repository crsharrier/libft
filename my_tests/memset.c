#include<stdlib.h>
#include<stdio.h>
#include<strings.h>
#include "../libft.h"
#include"testing.h"

int	main()
{
	int i;
    int pass;
	char buffer[10];
	char ft_buffer[10];

    pass = 1;
	i = 0;

	/*printf("buffer before = ");
	while(i < 10)
		printf("%c", buffer[i++]);
	printf("\n");
	i = 0;*/
	memset(buffer, 'd', 10);
	/*printf("buffer after memset(buffer, 'd', 10) = ");
	while(i < 10)
		printf("%c", buffer[i++]);
	printf("\n");


	i = 0;
	printf("ft_buffer before = ");
	while(i < 10)
		printf("%c", ft_buffer[i++]);
	printf("\n");
	i = 0;*/
	ft_memset(ft_buffer, 'd', 10);
	/*printf("ft_buffer after ft_memset(buffer, 'd', 10) = ");
	while(i < 10)
		printf("%c", ft_buffer[i++]);
	printf("\n");*/
    
    i = 0;
    while (i < 10)
    {
        if (buffer[i] != ft_buffer[i])
            pass = 0;
        i++;
    }

    ok_ko("memset", pass);

	return(0);
}