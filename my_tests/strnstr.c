#include<stdlib.h>
#include<stdio.h>
#include<bsd/string.h>
#include "../libft.h"
#include"testing.h"

char    *ft_strnstr(const char *big, const char *little, size_t len);

int	test_strnstr(char *big, char *little, size_t len)
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
/*	char haystack[30] = "aaabcabcd";
    	char needle[10] = "aabc";
    	char *empty = (char*)"";

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
*/

	//printf("haystack + 7 = %p\n", haystack + 7);
	//printf("ft_strnstr(%s, %s, %i) = %p\n", haystack, "cd", 8, ft_strnstr(haystack, "cd", 8));

	//ok_ko("ft_strnstr", pass);
	
	printf("ft_strnstr(hello, ll, 5) = %s", ft_strnstr("hello", "ll", 5));

	return(0);
}
