#include<stdio.h>
#include<string.h>
#include"libft.h"
#include"testing.h"

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
	ok_ko("bzero", pass);
	return(0);
}
