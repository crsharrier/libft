/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:25:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/14 08:35:01 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	char	*substring;
	char	*result;

	len += 1;
	if (little == "")
		return (big);
	substring = little;
	while (*big && len)
	{
		result = big;
		while (*substring++ == *big && len)
		{
			big++;
			len--;
		}
		if (*substring == '\0' && len > 0)
			return (result);
		substring = little;
		big++;
		len--;
	}
	return (NULL);
}
