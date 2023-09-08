#include<stdio.h>

int	isprint(int c)
{
	if(c >= 0 && c <= 31)
		return(1);
	return(0);
}

int	main()
{
	printf("ft_isprint(4) = %i\n", isprint(4));
	printf("ft_isprint(31) = %i\n", isprint(31));
	printf("ft_isprint(' ') = %i\n", isprint(' '));
	printf("ft_isprint('9') = %i\n", isprint('9'));
	return(0);
}
