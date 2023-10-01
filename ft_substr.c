/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:59 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/28 13:03:33 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	while (s[i])
		i++;
	if ((int)i - (int)start < 0)
		len = 0;
	else if (i - start < len)
		len = i - start;
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	i = 0;
	while (i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}


