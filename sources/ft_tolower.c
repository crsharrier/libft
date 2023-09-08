/*#include<stdio.h>
#include<ctype.h>*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(c + 32);
	return(c);
}

/*
int	main()
{
	printf("ft_tolower('e') = %i\n", ft_tolower('e'));
	printf("ft_tolower('E') = %i\n", ft_tolower('E'));
	printf("ft_tolower(4) = %i\n", ft_tolower(4));
	printf("\n");
	printf("tolower('e') = %i\n", tolower('e'));
	printf("tolower('E') = %i\n", tolower('E'));
	printf("tolower(4) = %i\n", tolower(4));
	return(0);
}*/
