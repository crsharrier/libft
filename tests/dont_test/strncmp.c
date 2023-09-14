#include<stdlib.h>
#include<stdio.h>
#include"libft.h"
#include"testing.h"

int	test_strncmp(char *str1, char *str2, unsigned int n)
{
	int	result;
	int	ft_result;
    
	result = strncmp(str1, str2, n);
	ft_result = ft_strncmp(str1, str2, n);
	//printf("Result for strncmp(%s, %s, %i) = %i\n", str1, str2, n, result);
	//printf("Result for ft_strncmp(%s, %s, %i) = %i\n", str1, str2, n, ft_result);
	if (result == ft_result)
		return (1);
	return (0);
}

int	main(void)
{
	char    *str1 = "Hello Wor";
    char    *str2 = "Hello World";
    char    *str3 = "  42 5d";
    char    *str4 = "  42 5";
	int	pass;

	pass = 1;
	if (!test_strncmp(str1, str2, 9))
		pass = 0;
	if (!test_strncmp(str1, str2, 10))
		pass = 0;
	if (!test_strncmp(str3, str4, 6))
		pass = 0;
	if (!test_strncmp(str3, str4, 15))
		pass = 0;

	ok_ko("ft_strncmp", pass);
	return(0);
}
