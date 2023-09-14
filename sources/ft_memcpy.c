/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:34:07 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/14 08:26:28 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char 	*p_dest;
	const unsigned char *p_src;

	p_dest = dest;
	p_src = src;
	i = 0;
	while(i < n)
	{
		p_dest[i] = (unsigned char)p_src[i];
		i++;
	}
	return(dest);
}