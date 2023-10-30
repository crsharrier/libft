#include<string.h>
#include<stdio.h>
#include "../libft.h"
#include"testing.h"

int    test_strrchr(const char *s, int c)
{
	char *result;
	char *ft_result;
    
	result = strrchr(s, c);
	ft_result = ft_strrchr(s, c);
	printf("Result for strrchr(%s, %c) \t= %p\n", s, c, result);
	printf("Result for ft_strrchr(%s, %c) \t= %p\n", s, c, ft_result);
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
	if (!test_strrchr(str1, 'l'))
		pass = 0;
    if (!test_strrchr(str1, 'B' + 256))
		pass = 0;
	if (!test_strrchr(str1, 'B'))
		pass = 0;
	if (!test_strrchr(str2, ' '))
		pass = 0;
	if (!test_strrchr(str3, ' '))
		pass = 0;

	ok_ko("ft_strrchr", pass);
	return(0);
}