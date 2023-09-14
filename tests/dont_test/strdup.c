#include <ctype.h>
#include<string.h>
#include"libft.h"
#include"testing.h"

int	main(void)
{
	char *test_values[] = {" ", "", "hello", "dsfr_442 "};
    int pass;

    pass = compare_outputs_charptr_constcharptr(test_values, 4, ft_strdup, strdup);
    ok_ko("strdup", pass);
    return (0);
}