#include "../libft.h"
#include"testing.h"
#include<stdio.h>

int	main()
{
	//int i;
    int pass;
	char buffer[11];
    void *ptr1;
    void *ptr2;
    void *ptr3;
    void *ptr4;

	strcpy(buffer, "helloWorld");

    pass = 1;
	/*i = 0;
	printf("buffer = ");
	while(i < 11)
		printf("%c", buffer[i++]);
	printf("\n");
	i = 0;
	printf("memchr(buffer, 'W', 11) = %p", memchr(buffer, 'W', 11));
	printf("\n");
    printf("ft_memchr(buffer, 'W', 11) = %p", ft_memchr(buffer, 'W', 11));
	printf("\n");
	printf("memchr(buffer, 'W', 5) = %p", memchr(buffer, 'W', 5));
	printf("\n");
    printf("ft_memchr(buffer, 'W', 5) = %p", ft_memchr(buffer, 'W', 5));
	printf("\n");*/

    ptr1 = memchr(buffer, 'W', 11);
    ptr2 = ft_memchr(buffer, 'W', 11);
    ptr3 = memchr(buffer, 'W', 5);
    ptr4 = ft_memchr(buffer, 'W', 5);

    if (ptr1 != ptr2)
        pass = 0;
    if (ptr3 != ptr4)
        pass = 0;

    ok_ko("memchr", pass);

	return(0);
}