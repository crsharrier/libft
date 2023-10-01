/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 06:13:09 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/14 08:27:11 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*charsrc;
	unsigned char	*chardest;
	unsigned char	temp[n];
	unsigned int		i;

	charsrc = (unsigned char *)src;
	chardest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		temp[i] = charsrc[i];
		i++;
	}
	while (i > 0)
	{
		chardest[i] = temp[i];
		i--;
	}
	return ((void *)chardest);
}
