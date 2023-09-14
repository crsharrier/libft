#include <ctype.h>
#include"libft.h"
#include"testing.h"

int	main()
{
    int test_values[] = {'a', 'z', '0', '9'};
    int pass;

    pass = compare_outputs_int_int(test_values, 4, ft_isdigit, isdigit);
    ok_ko("isdigit", pass);
    return (0);
}