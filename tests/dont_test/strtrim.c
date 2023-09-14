#include<stdio.h>
#include"testing.h"
#include"libft.h"

int     main(void)
{
    char    *str1 = "Hello";
    char    *str2 = "  Hello";
    char    *str3 = "Hello  ";
    char    *str4 = "  Hel  lo";
    char    *str5 = "  Hel  lo  ";

    printf("Result for ft_strtrim(%s) = |%s|\n", str1, ft_strtrim(str1));
    printf("Result for ft_strtrim(%s) = |%s|\n", str2, ft_strtrim(str2));
    printf("Result for ft_strtrim(%s) = |%s|\n", str3, ft_strtrim(str3));
    printf("Result for ft_strtrim(%s) = |%s|\n", str4, ft_strtrim(str4));
    printf("Result for ft_strtrim(%s) = |%s|\n", str5, ft_strtrim(str5));
    return (0);
}