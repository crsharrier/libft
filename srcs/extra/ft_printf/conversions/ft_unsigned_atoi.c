/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:43:04 by csharrie          #+#    #+#             */
/*   Updated: 2024/04/29 14:09:19 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned long long	ft_power(unsigned long long nb, int power)
{
	if (power)
		return (nb * ft_power(nb, power - 1));
	return (1);
}

static unsigned int	convert(char *start, int count)
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

unsigned int	ft_unsigned_atoi(const char *str)
{
	unsigned int	total;
	char			*start_of_digits;
	int				digit_count;

	digit_count = 0;
	while (ft_space(*str) == 1)
		str++;
	if (*str == '+' || *str == '-')
		str++;
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	start_of_digits = (char *)str;
	while (*str >= '0' && *str <= '9')
	{
		digit_count++;
		str++;
	}
	total = convert(start_of_digits, digit_count);
	return (total);
}
