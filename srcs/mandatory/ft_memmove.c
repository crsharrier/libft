/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 06:13:09 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/01 16:37:57 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*move_rev(unsigned char *dest, unsigned char *src, size_t n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return ((void *)dest);
}

static void	*move_fwd(unsigned char *dest, unsigned char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return ((void *)dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*charsrc;
	unsigned char	*chardest;
	void			*result;

	charsrc = (unsigned char *)src;
	chardest = (unsigned char *)dest;
	if (src < dest)
		result = move_rev(chardest, charsrc, n);
	else
		result = move_fwd(chardest, charsrc, n);
	return (result);
}
