#include <ctype.h>
#include "../libft.h"
#include"testing.h"

int	main()
{
    int test_values[] = {-1, 127, 228, 0};
    int pass;

    pass = compare_outputs_int_int(test_values, 4, ft_isascii, isascii);
    ok_ko("isascii", pass);
    return (0);
}

