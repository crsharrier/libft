#include<stdio.h>
#include"testing.h"
#include"libft.h"

int     main(void)
{
    int     nb1 = 0;
    int     nb2 = 300;
    int     nb3 = -3525;
    int     nb4 = -2147483648;

    printf("Result for ft_itoa(%i) = |%s|\n", nb1, ft_itoa(nb1));
    printf("Result for ft_itoa(%i) = |%s|\n", nb2, ft_itoa(nb2));
    printf("Result for ft_itoa(%i) = |%s|\n", nb3, ft_itoa(nb3));
    printf("Result for ft_itoa(%i) = |%s|\n", nb4, ft_itoa(nb4));
    return (0);
}