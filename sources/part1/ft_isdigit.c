#include<stdio.h>

int	isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return(1);
	return(0);
}

int	main()
{
	printf("ft_isdigit('A') = %i\n", isdigit('A'));
	printf("ft_isdigit('0') = %i\n", isdigit('0'));
	printf("ft_isdigit('{') = %i\n", isdigit('{'));
	printf("ft_isdigit('9') = %i\n", isdigit('9'));
	return(0);
}
