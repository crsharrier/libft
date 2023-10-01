#include <ctype.h>
#include "../libft.h"
#include"testing.h"

int	main()
{
    int test_values[] = {' ', 4, 31, '9'};
    int pass;

    pass = compare_outputs_int_int(test_values, 4, ft_isprint, isprint);
    ok_ko("isprint", pass);
    return (0);
}