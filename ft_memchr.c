/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:44:10 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 09:13:32 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*p;

	cc = (unsigned char)c;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*p == cc)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}
