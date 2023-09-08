#include<stdlib.h>
#include<stdio.h>

int	test_atoi(char *str)
{
	int	result;
	int	ft_result;

	result = atoi(str);
	ft_result = ft_atoi(str);
	printf("Result for atoi(%s) = %i\n", str, result);
	printf("Result for ft_atoi(%s) = %i\n" str, ft_result);
	if (result == ft_result)
		return (1);
	return (0);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int	pass;

	str1 = "---+--+1234ab567"";
	str2 = "1234";
	str3 = "12 34";
	str4 = "0";
	pass = 1;
	if (!test_atoi(str1))
		pass = 0;
	if (!test_atoi(str2))
		pass = 0;
	if (!test_atoi(str3))
		pass = 0;
	if (!test_atoi(str4))
		pass = 0;

}
