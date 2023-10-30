#include<stdio.h>
#include"testing.h"
#include "../libft.h"

int     main(void)
{
    char    *str1 = "Hello   x";
    char    *str2 = "  Hello";
    char    *str3 = "x  Hello  xxx";
    char    *str4 = "  Hel  lo";
    char    *str5 = "  Hel  lo  ";

    printf("Result for ft_strtrim(%s) = |%s|\n", str1, ft_strtrim(str1, "x "));
    printf("Result for ft_strtrim(%s) = |%s|\n", str2, ft_strtrim(str2, "x "));
    printf("Result for ft_strtrim(%s) = |%s|\n", str3, ft_strtrim(str3, "x "));
    printf("Result for ft_strtrim(%s) = |%s|\n", str4, ft_strtrim(str4, "x "));
    printf("Result for ft_strtrim(%s) = |%s|\n", str5, ft_strtrim(str5, "x "));
    return (0);
}