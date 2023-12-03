#include "libft.h"
#include <stdio.h>
/*
Takes a list of strings and prints each one.
*/
void	print_list(char **list)
{
	while (*list)
		printf("%s\n", *list++);
}

int	main(void)
{
	char **list;

	list = ft_strlist(4, "Chris", "Ren", "Jack", "Niamh");
	printf("list = %p:\n", list);
	print_list(list);
	printf("\n NOW WE FREE THE LIST\n");
	printf("list = %p:\n", list);
	ft_free_strlist(list);
	return (0);
}