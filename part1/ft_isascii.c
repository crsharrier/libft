#include<stdio.h>

int	isascii(int c)
{
	if(c >= 33 && c <= 127)
		return(1);
	return(0);
}

int	main()

	printf("ft_isalpha('A') = %i\n", isalpha('A'));
	printf("ft_isalpha('z') = %i\n", isalpha('z'));
	printf("ft_isalpha('{') = %i\n", isalpha('{'));
	printf("ft_isalpha('@') = %i\n", isalpha('@'));
	return(0);
}
