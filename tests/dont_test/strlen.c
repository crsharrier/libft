#include"libft.h"
#include"testing.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	//int i;
    int pass;
    char *str1 = "Hello";
    char *str2 = "";
    char *str3 = "  fa4 we";

    pass = 1;
    if (strlen(str1) != ft_strlen(str1))
        pass = 0;
    if (strlen(str2) != ft_strlen(str2))
        pass = 0;
    if (strlen(str3) != ft_strlen(str3))
        pass = 0;

    ok_ko("strlen", pass);

	return(0);
}