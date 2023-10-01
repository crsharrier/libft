/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:45:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/29 14:27:01 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	dest_len;
	int	src_len;

	dest_len = 0;
	while (dest[dest_len] && dest_len < (int)size)
		dest_len++;
	src_len = ft_strlen(src);
	i = 0;
	while (i++ < dest_len);
	j = 0;
	while (j < src_len && j < (int)(size - dest_len - 1))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest_len + src_len);
}
