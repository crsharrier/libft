/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:45:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/04 09:15:26 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen((char *)dest);
	src_len = ft_strlen((char *)src);
	j = 0;
	while (j < src_len && j + 1 + dest_len < size)
	{
		*(dest + dest_len + j) = *(src + j);
		j++;
	}
	if (dest_len + j < size)
		*(dest + dest_len + j) = '\0';
	if (size < dest_len)
		return (size + src_len);
	return (dest_len + src_len);
}
