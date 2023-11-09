#include "../libft.h"
#include"testing.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int     main(void)
{
    int     i;
    int     pass;

    //TEST CASE 1: 
    void    *src1;
    void    *dest1;
    void    *result1;

    // src1  = "h e l l o 0 _ _"
    // dest1 =      ^
    src1 = malloc(sizeof(char) * 8);
    dest1 = src1 + 2;
    strcpy((char*)src1, "Hello");

    i = 0;
    printf("Addresses in src1 =\n");
    while (i < 8)
        printf("\t%p\n", (src1 + i++));
    printf("dest1 address = \n\t%p\n", dest1);

    // src1    = "h e h e l l o 0"
    // result1 =      ^
    result1 = ft_memmove(dest1, src1, 6);

    printf("result1 = %p\n", result1);
    printf("result1 string = %s\n", (char*)result1);
	printf("src1 = %s\n", src1);

    printf("\n******************\n");


    //TEST CASE 2: 
    void    *src2;
    void    *dest2;
    void    *result2;

    // dest2  = "_ _ h e l l o 0"
    // src2   =      ^
    dest2 = malloc(sizeof(char) * 8);
    src2 = dest2 + 2;
    strcpy((char*)src2, "Hello");

    i = 0;
    printf("Addresses in dest2 =\n");
    while (i < 8)
        printf("\t%p\n", (dest2 + i++));
    printf("src2 address = \n\t%p\n", src2);

    // src2    = "h e h e l l o 0"
    // result2 =  ^
    result2 = ft_memmove(dest2, src2, 6);

    printf("result2 = %p\n", result2);
    printf("result2 string = %s\n", (char*)result2);
	printf("src2 = %s\n", src2);

    //pass = 1;


	/*if (ptr1 != ptr2)
        pass = 0;
    ok_ko("memmove", pass);*/

    return (0);
}
