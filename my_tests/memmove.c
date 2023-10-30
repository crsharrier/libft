#include "../libft.h"
#include"testing.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int     main(void)
{
    char    *src = malloc(sizeof(char) * 8);
    char    *dest = src + 2;

    void    *ptr1;
    void    *ptr2;
    int     i;
    int     pass;

    strcpy(src, "Hello\n");
    i = 0;
    //pass = 1;

    ptr1 = (src + 2);
	printf("src = %s", src);
    printf("Addresses in src =\n");
    while (i < 6)
        printf("%p\n", (src + i++));
    printf("Dest address = \n%p\n", dest);

    ptr2 = memmove(dest, src, 6);
	printf("src = %s", src);
    printf("Address after memmove = %p\n", ptr2);
    
	
	/*if (ptr1 != ptr2)
        pass = 0;
    ok_ko("memmove", pass);*/

    return (0);
}