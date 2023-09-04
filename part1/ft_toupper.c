/*#include<stdio.h>
#include<ctype.h>*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 32);
	return(c);
}

/*
int	main()
{
	printf("ft_toupper('e') = %i\n", ft_toupper('e'));
	printf("ft_toupper('E') = %i\n", ft_toupper('E'));
	printf("ft_toupper(4) = %i\n", ft_toupper(4));
	printf("\n");
	printf("toupper('e') = %i\n", toupper('e'));
	printf("toupper('E') = %i\n", toupper('E'));
	printf("toupper(4) = %i\n", toupper(4));
	return(0);
}*/
