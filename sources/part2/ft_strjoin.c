#include <stdlib.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
			j++;
		i++;
		j++;
	}
	result = malloc(sizeof(char) * j)
	


}
