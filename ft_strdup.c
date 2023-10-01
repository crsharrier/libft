/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:00:20 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/28 09:11:45 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (*(src + i))
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}
