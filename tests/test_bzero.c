#include<stdio.h>
#include<string.h>

void	*ft_bzero(void *s, int n);

int	main()
{
	char	string[11];
	char	ft_string[11];
	int		i;

	i = 0;
	strncpy(string, "helloWorld", 11);

	printf("String before = ");
	while(i < 10)
		printf("%c", string[i++]);
	printf("\n");
	i = 0;
	bzero(string, 7);
	printf("String after bzero(string, 7) = ");
	while(i < 10)
		printf("%c", string[i++]);
	printf("\n");

	i = 0;
	strncpy(ft_string, "helloWorld", 11);

	printf("ft_string before = ");
	while(i < 10)
		printf("%c", ft_string[i++]);
	printf("\n");
	i = 0;
	ft_bzero(ft_string, 7);
	printf("ft_string after ft_bzero(string, 7) = ");
	while(i < 10)
		printf("%c", ft_string[i++]);
	printf("\n");
	return(0);
}