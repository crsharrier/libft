/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:43:04 by csharrie          #+#    #+#             */
/*   Updated: 2024/05/10 13:23:12 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long long	ft_power(int nb, int power)
{
	if (power)
		return (nb * ft_power(nb, power - 1));
	return (1);
}

static long long	convert(char *start, int count)
{
	long long	total;

	total = 0;
	while (count)
	{
		total += (*start - 48) * ft_power(10, count - 1);
		start++;
		count--;
	}
	return (total);
}

static int	ft_space(char c)
{
	char	*test_str;

	test_str = " \f\t\n\v\r";
	while (*test_str)
		if (c == *test_str++)
			return (1);
	return (0);
}

int	ft_atoll(const char *str)
{
	long long	total;
	char		*start_of_digits;
	int			digit_count;
	int			neg;

	neg = 1;
	digit_count = 0;
	while (ft_space(*str) == 1)
		str++;
	if (*str == '-')
		neg = -1;
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
	total *= neg;
	return (total);
}
