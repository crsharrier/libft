/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:05:53 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 09:19:47 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	find_magnitude(int nb)
{
	if (nb < 0)
		nb *= -1;
	if (nb % 10 == 0 && nb / 10 == 0)
		return (0);
	return (1 + find_magnitude(nb / 10));
}

static void	ft_strncpy(char *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	putnbr_to_str(int nb, char *str, int *i)
{
	int	to_write;

	if (nb == -2147483648)
	{
		ft_strncpy("2147483648", ++str, 10);
		return ;
	}
	if (nb / 10)
		putnbr_to_str(nb / 10, str, i);
	to_write = 48 + (nb % 10);
	str[*i] = to_write;
	*i += 1;
}

char	*ft_itoa(int nb)
{
	char	*new_str;
	int		i;
	int		len;

	i = 0;
	if (nb < 0)
	{
		i = 1;
		nb *= -1;
	}
	len = find_magnitude(nb);
	if (nb == 0)
		len = 1;
	new_str = malloc(sizeof(char) * (len + i + 1));
	new_str[len + i] = '\0';
	if (i == 1)
		new_str[0] = '-';
	putnbr_to_str(nb, new_str, &i);
	return (new_str);
}
