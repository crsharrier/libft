/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:52:02 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/14 08:31:41 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i++ < (size - 1) && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (size);
}
