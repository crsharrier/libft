#include<stdlib.h>
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*result;

	i = 0;
	while (s[i])
		i++;
	result = malloc((i - start + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main(void)
{
	char	*str;

	str = "Hello World";
	printf("ft_substr(\"Hello World\", 3, 6) = %s", ft_substr(str, 3, 6));
	return (0);
}

