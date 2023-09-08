/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:43:04 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/08 13:54:27 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power(int nb, int power)
{
	if (power)
		return (nb * ft_power(nb, power - 1));
	return (1);
}

int	convert(char *start, int count)
{
	int	total;

	total = 0;
	while (count)
	{
		total += (*start - 48) * ft_power(10, count - 1);
		start++;
		count--;
	}
	return (total);
}

int	ft_space(char c)
{
	char	*test_str;

	test_str = " \f\t\n\v\r";
	while (*test_str)
		if (c == *test_str++)
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	char	*start_of_digits;
	int		minus_count;
	int		digit_count;
	int		total;

	minus_count = 0;
	digit_count = 0;
	while (ft_space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	start_of_digits = str;
	while (*str >= '0' && *str <= '9')
	{
		digit_count++;
		str++;
	}
	total = convert(start_of_digits, digit_count);
	if (minus_count % 2 == 1)
		total *= -1;
	return (total);
}

int	main(void)
{
	printf("Result for ---+--+1234ab567 = %i\n", ft_atoi("---+--+1234ab567"));
	printf("Result for ---+ --+1234ab567 = %i\n", ft_atoi("---+ --+1234ab567"));
	printf("Result for __---+--+1234ab567 = %i\n", ft_atoi("  ---+--+1234ab567"));
	printf("Result for 1234 = %i\n", ft_atoi("1234"));
	printf("Result for 12 34 = %i\n", ft_atoi("12 34"));
	printf("Result for 0 = %i\n", ft_atoi("0"));
	return (0);
}
