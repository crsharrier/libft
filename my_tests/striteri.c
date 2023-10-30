#include<stdio.h>
#include<unistd.h>
#include "../libft.h"
#include"testing.h"

void    write_string(unsigned int i, char *str)
{
    write(1, (str + i), 1);
}

int	main(void)
{
	char    *str1 = "Hello World";
    char    *str2 = "23456789";

    printf("\033[33m FT_STRITERI\n\033[0m");
	printf("strings to write: %s, %s\n", str1, str2);
    ft_striteri(str1, write_string);
    ft_striteri(str2, write_string);
	printf("\n");
}