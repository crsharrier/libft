#include <stdio.h>
#include "testing.h"
#include "../libft.h"

int     main(void)
{
    char    *str = "Hello   x";
    char    *set = " x";

    printf("Result for ft_strtrim(%s, %s) = |%s|\n", str, set, ft_strtrim(str, set));
    str = "  Hello";
    printf("Result for ft_strtrim(%s, %s) = |%s|\n", str, set, ft_strtrim(str, set));
    str = "x  Hello  xxx";
    printf("Result for ft_strtrim(%s, %s) = |%s|\n", str, set, ft_strtrim(str, set));
    str = "   xxxtripouille";
    printf("Result for ft_strtrim(%s, %s) = |%s|\n", str, set, ft_strtrim(str, set));
    str = "  Hel  lo  ";
    printf("Result for ft_strtrim(%s, %s) = |%s|\n", str, set, ft_strtrim(str, set));

    return (0);
}