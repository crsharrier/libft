#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"
#include"testing.h"

char    *test_strnstr(char *big, char *little, size_t len)
{
	char *result;
	char *ft_result;
    
	result = strnstr(big, little, len);
	ft_result = ft_strnstr(big, little, len);
	//printf("Result for strnstr(%s, %s, %i) = %i\n", big, little, len, result);
	//printf("Result for ft_strnstr(%s, %s, %i) = %i\n", big, little, len, ft_result);
	if (strcmp(result, ft_result) != 0)
		return (1);
	return (0);
}

int	main(void)
{
	char    *str1 = "Hello World";
    char    *str2 = "Wor";
    char    *str3 = "Wod";
    char    *str4 = "";
	int	pass;

	pass = 1;
	if (!test_strnstr(str1, str2, 9))
		pass = 0;
	if (!test_strnstr(str1, str2, 8))
		pass = 0;
	if (!test_strnstr(str1, str3, 9))
		pass = 0;
	if (!test_strnstr(str4, str1, 15))
		pass = 0;
    if (!test_strnstr(str1, str4, 15))
		pass = 0;

	ok_ko("ft_strnstr", pass);
	return(0);
}