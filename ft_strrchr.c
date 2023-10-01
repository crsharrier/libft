/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:38:12 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/27 23:43:37 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	unsigned char cc;

	i = 0;
	p = (char *)s;
	cc = (unsigned char)c;
	while (*p)
	{
		i++;
		p++;
	}
	if (cc == '\0')
		return (p);
	while (i >= 0)
	{
		if (*p == cc)
			return (p);
		i--;
		p--;
	}
	return (NULL);
}
