#include<stdio.h>
#include<unistd.h>
#include "../libft.h"
#include"testing.h"

void    write_string(unsigned int i, char *str)
{
    write(1, (str + i), 1);
}

void    iter(unsigned int i, char * s) 
{
	*s += i;
    printf("iter: i = %i, s = %s\n", i, s);
}

int	main(void)
{
	char    str1[] = "0";
    char    str2[] = "0000000000";

    

    printf("\033[33m FT_STRITERI\n\033[0m");
	printf("strings to write: %s, %s\n", str1, str2);
    ft_striteri(str1, iter);
    printf("str1 after = %s\n", str1);
    ft_striteri(str2, iter);
    printf("str2 after = %s\n", str2);
}