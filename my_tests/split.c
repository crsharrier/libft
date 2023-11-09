#include "../libft.h"
#include "testing.h"
#include <unistd.h>
#include <string.h>

//int count_words(char const *str, char delim);

int		array_len(char **array){
	int i;

	i = 0;
	while(array[i] != 0)
		i++;
	return (i);
}

void	print_strings(char **strs)
{
	int		i;

	//printf("array length = %i\n", array_len(strs));
	i = 0;
	while (strs[i])
	{
		printf("%s", strs[i]);
		printf("_");
		i++;
	}
}

int	main(void)
{
	char	*str1 = "Tripouille";
	char	*str2 = "xricexbeansx";
	char	*str3 = "999";

	
	//printf("array_len" (ft_split(str1, ' ')));
	//print_strings(ft_split(splitme, ' '));

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

	//printf("count_words: %i\n", count_words("", ' '));
	return (0);
}