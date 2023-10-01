/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:25:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/10/01 14:04:17 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	char	*substring;
	char	*result;
	int	sub_len;

	sub_len = 0;
	if (!ft_strncmp(little, "", 2))
		return (big);
	substring = little;
	while (*big && len)
	{
		result = big;
		if ((*substring && *substring == *big && len))
		{
			sub_len = 0;
			while (*substring && *substring == *big && len)
			{
				big++;
				substring++;
				sub_len++;
				len--;
			}
		}
		else
		{
			big++;
			len--;
		}
		if (*substring == '\0')
			return (result);
		substring = little;
		big = result + 1;
		len += (sub_len - 1);
	}
	return (NULL);
}
