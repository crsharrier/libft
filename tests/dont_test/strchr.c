#include<string.h>
#include<stdio.h>
#include"libft.h"
#include"testing.h"

int    test_strchr(const char *s, int c)
{
	char *result;
	char *ft_result;
    
	result = strchr(s, c);
	ft_result = ft_strchr(s, c);
	printf("Result for strchr(%s, %c) \t= %p\n", s, c, result);
	printf("Result for ft_strchr(%s, %c) \t= %p\n", s, c, ft_result);
	if (result == ft_result)
		return (1);
	return (0);
}

int	main(void)
{
	char    *str1 = "Bellyflop";
    char    *str2 = "  Wor  ";
    char    *str3 = "";
	int	pass;

	pass = 1;
	if (!test_strchr(str1, 'l'))
		pass = 0;
    if (!test_strchr(str1, '\0'))
		pass = 0;
	if (!test_strchr(str1, ' '))
		pass = 0;
	if (!test_strchr(str2, ' '))
		pass = 0;
	if (!test_strchr(str3, ' '))
		pass = 0;

	ok_ko("ft_strchr", pass);
	return(0);
}