/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:52:02 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/29 13:08:38 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while(src[len++]);
	len--;
	if (!size)
		return (len);
	i = 0;
	while (i++ < (size - 1) && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
