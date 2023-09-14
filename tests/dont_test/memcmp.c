#include"libft.h"
#include"testing.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	int	arr1[5] = {3, 5, 6, 3, 9};
	int	arr2[5] = {3, 5, 6, 3, 4};
    int pass;

    pass = 1;
	/*printf("memcmp 15 = %i\n", memcmp(arr1, arr2, 15));
	printf("memcmp 16 = %i\n", memcmp(arr1, arr2, 16));
	printf("memcmp 17 = %i\n", memcmp(arr1, arr2, 17));
	printf("ft_memcmp 15 = %i\n", ft_memcmp(arr1, arr2, 15));
	printf("ft_memcmp 16 = %i\n", ft_memcmp(arr1, arr2, 16));
	printf("ft_memcmp 17 = %i\n", ft_memcmp(arr1, arr2, 17));*/
    
    if (memcmp(arr1, arr2, 15) != ft_memcmp(arr1, arr2, 15))
        pass = 0;
    if (memcmp(arr1, arr2, 16) != ft_memcmp(arr1, arr2, 16))
        pass = 0;
    if (memcmp(arr1, arr2, 17) != ft_memcmp(arr1, arr2, 17))
        pass = 0;
    ok_ko("memcmp", pass);
	return (0);
}