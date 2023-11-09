#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

int	main(void)
{
	void	*result;
	char ex[] = {0, 0, 0, 0};
	size_t		nmemb = 1;
	size_t		size = sizeof(int);
	
	//printf("LONG_MAX = %li", LONG_MAX);

	result = ft_calloc(nmemb, size);
	printf("Result for calloc (%li, %li)= %p\n", nmemb, size, result);
	printf("memcmp = %i\n", memcmp(ex, result, 4));

	result = ft_calloc(LONG_MAX, LONG_MAX);
	printf("Result for calloc (%i, %i)= %p\n", INT_MAX, INT_MAX, result);
	result = ft_calloc(LONG_MIN, LONG_MIN);
	printf("Result for calloc (%i, %i)= %p\n", INT_MIN, INT_MIN, result);
	result = ft_calloc(LONG_MIN, LONG_MIN);
	printf("Result for calloc (%i, %i)= %p\n", 0, 0, result);
	}