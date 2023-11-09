#include <ctype.h>
#include "../libft.h"
#include"testing.h"

int	main()
{
    int test_values[] = {'A', 'z', '{', '9'};
    int pass;

    printf("isalpha('a') = %i\n\n", isalpha('a'));
    pass = compare_outputs_int_int(test_values, 4, ft_isalpha, isalpha);
    ok_ko("isalpha", pass);
    return (0);
}