#include<stdio.h>
#include<unistd.h>
#include"libft.h"
#include"testing.h"

char    increment_char(unsigned int i, char c)
{
    return (c + 1);
}

int	main(void)
{
	char    *str1 = "Hello World";
    char    *str2 = "23456789";
    char    *result1;
    char    *result2;

    printf("\033[33m FT_STRMAPI\n\033[0m");
	printf("string1 before: |%s|\n", str1);
	printf("string2 before: |%s|\n", str2);
    result1 = ft_strmapi(str1, increment_char);
    result2 = ft_strmapi(str2, increment_char);
    printf("string1 after increment: |%s|\n", result1);
	printf("string2 after increment: |%s|\n", result2);
	printf("\n");
}
