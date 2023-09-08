#include<stdio.h>
#include<string.h>

void	*ft_bzero(void *s, int n);

void	print_chars(char *ptr, int size)
{
	int	i;

	i = 0;
	while(i < size)
		printf("%c", ptr[i++]);
}

int	test1()
{
	char	string[11];
	char	ft_string[11];

	strncpy(string, "helloWorld", 11);
	strncpy(ft_string, "helloWorld", 11);
	
	/*printf("BEFORE:\nstring = ");
	print_chars(string, 11);
	printf("\nft_string = ");
	print_chars(ft_string, 11);*/

	bzero(string, 7);
	ft_bzero(ft_string, 7);

	/*printf("\nAFTER:\nstring = ");
	print_chars(string, 11);
	printf("\nft_string = ");
	print_chars(ft_string, 11);
	printf("\n");*/

	return (strcmp(string, ft_string));
}

int	main(void)
{
	int	pass;

	pass = 1;

	if (test1() != 0)
		pass = 0;
	if (pass == 1)
		printf("\033[32mft_bzero = OK!\n");
	else
		printf("\033[31mft_bzero = KO!\n");
	printf("\033[0m");
	return(0);
}
