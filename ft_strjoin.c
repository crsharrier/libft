/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:35:21 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/29 13:34:55 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const* s1, char const*s2)
{
	char	*result;
	int len;
	int	i;
	int	j;

	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	result = malloc(sizeof(char) * len + 1);
	result[len] = '\0';
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	return (result);
}
