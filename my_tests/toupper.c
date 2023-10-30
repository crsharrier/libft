#include <ctype.h>
#include "../libft.h"
#include"testing.h"

int	main()
{
    int test_values[] = {'e', 'E', '4', '{'};
    int pass;

    pass = compare_outputs_int_int(test_values, 4, ft_toupper, toupper);
    ok_ko("toupper", pass);
    return (0);
}