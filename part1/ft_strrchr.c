#include<stdio.h>
#include<string.h>

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i++])
		s++;
	while (i)
	{
		if (*s == c)
			return (s);
		i--;
		s--;
	}
	return NULL;
}

int	main(void)
{
	char	*str;

	str = "belly";
	printf("ft_strrchr(str, 'l') = %p\n", ft_strrchr(str, 'l'));
	printf("strrchr(str, 'l') = %p", strrchr(str, 'l'));
	return (0);
}
