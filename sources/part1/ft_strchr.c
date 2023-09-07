#include<stdio.h>
#include<string.h>

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return NULL;
}

int	main(void)
{
	char	*str;

	str = "belly";
	printf("ft_strchr(str, 'l') = %p\n", ft_strchr(str, 'l'));
	printf("strchr(str, 'l') = %p", strchr(str, 'l'));
	return (0);
}
