#include "../libft.h"
#include "testing.h"
#include<unistd.h>

void	print_strings(char **strs)
{
	int		i;
	int		j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			//write(1, (strs[i] + j), 1);
			printf("%c", strs[i][j]);
			j++;
		}
		//write(1, "\n", 1);
		printf("_");
		i++;
	}
	//write(1, "\n\n", 1);
}

int	main(void)
{
	char	*str1 = "let's go home";
	char	*str2 = "xricexbeansx";
	char	*str3 = "999";

	printf("|%s|, \' \' --> \t|", str1);
	print_strings(ft_split(str1, ' '));
	printf("|");
	printf("\n");
	printf("|%s|, \'x\' --> \t|", str2);
	print_strings(ft_split(str2, 'x'));
	printf("|");
	printf("\n");
	printf("|%s|, \'9\' --> \t|", str3);
	print_strings(ft_split(str3, '9'));
	printf("|");
	printf("\n");



	return (0);
}