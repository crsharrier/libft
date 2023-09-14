/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:38:12 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/14 08:35:37 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)s;
	while (p++)
		i++;
	if (c == '\0')
		return (p);
	while (i)
	{
		if (*p == c)
			return (p);
		i--;
		p--;
	}
	return (NULL);
}
