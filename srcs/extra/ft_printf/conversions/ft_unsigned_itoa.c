/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:05:53 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/23 17:40:46 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	find_magnitude(unsigned int nb)
{
	if (nb % 10 == 0 && nb / 10 == 0)
		return (0);
	return (1 + find_magnitude(nb / 10));
}

static void	putnbr_to_str(unsigned int nb, char *str, int *i)
{
	int	to_write;

	if (nb / 10)
		putnbr_to_str(nb / 10, str, i);
	to_write = 48 + (nb % 10);
	str[*i] = to_write;
	*i += 1;
}

char	*ft_unsigned_itoa(unsigned int nb)
{
	char	*new_str;
	int		len;
	int		i;

	len = find_magnitude(nb);
	if (!nb)
		len = 1;
	new_str = malloc(sizeof(char) * (len + 1));
	new_str[len] = '\0';
	i = 0;
	putnbr_to_str(nb, new_str, &i);
	return (new_str);
}
