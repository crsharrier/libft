#include <string.h>
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char tab[100];
        memset(tab, 0, 100);
        ft_memset(tab, 'A', 0);
	printf("tab[0] = %i\n", tab[0]);
        ft_memset(tab, 'A', 42);
        int i = 0;
        for (; i < 100 && tab[i] == 'A'; ++i)
		;
	printf("i = %i\ntab[42] = %i\n", i, tab[42]);
	return (0);
}
