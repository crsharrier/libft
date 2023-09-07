#include<stdio.h>
#include<string.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	char	*substring;
	char	*result;
	int		i;

	if (little == "")
		return (big);
	if (big == "")
		return NULL;
	i = 0;
	substring = little;
	while (*big && i < len)
	{
		if (*big == *substring)
		{
			result = big;
			while (*substring == *big)
			{
				big++;
				i++;
				substring++;
			}
			if (*substring == '\0')
				return (result);
			substring = little;
		}
		str++;
	}
	return(NULL);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "HelloWorld";
	str2 = "llo";

	printf("str1 = \"Hello World\", str2 = \"llo\"\n");
	printf("Result for strnstr 4: %s\n", strnstr(str1, str2, 4));
	printf("Result for strnstr 9: %s\n", strnstr(str1, str2, 9));
	printf("Result for ft_strnstr 4: %s\n", strnstr(str1, str2, 4));
	printf("Result for ft_strnstr 9: %s\n", strnstr(str1, str2, 9));
	return (0);
}
