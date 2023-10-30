#include <stdio.h>
#include "libft.h"

int main(void)
{
	char const *s1 = "Hello";
	char const *s2 = "World";
	printf("Result = %s\n", ft_strjoin(s1, s2));

	return (0);
}