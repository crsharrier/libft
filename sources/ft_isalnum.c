#include<stdio.h>

int	isalnum(int c)
{
	if((c >= '0' && c <= '9' ) || (c >= 'A' && c <= 'z'))
		return(1);
	return(0);
}

int	main()
{
	printf("ft_isalnum('A') = %i\n", isalnum('A'));
	printf("ft_isalnum('z') = %i\n", isalnum('z'));
	printf("ft_isalnum('0') = %i\n", isalnum('0'));
	printf("ft_isalnum('9') = %i\n", isalnum('9'));
	printf("ft_isalnum('{') = %i\n", isalnum('{'));
	printf("ft_isalnum('@') = %i\n", isalnum('@'));
	return(0);
}
