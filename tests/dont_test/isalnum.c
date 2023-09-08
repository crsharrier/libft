#include <ctype.h>
#include"libft.h"
#include"testing.h"

int	main()
{
    int test_values[] = {'A', 'z', '{', '9'};
    int pass;

    pass = compare_outputs_int_int(test_values, 4, ft_isalnum, isalnum);
    ok_ko("isalnum", pass);
    return (0);
}