/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:46:32 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/27 23:44:56 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	unsigned char cc;

	p = (char *)s;
	cc = (unsigned char)c;
	while (*p)
	{
		if (*p == cc)
			return (p);
		p++;
	}
	if (cc == '\0')
		return (p);
	return (NULL);
}
