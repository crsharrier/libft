/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:25:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/01 17:01:05 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_substr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	while (big[i] && big[i] == little[i] && len)
	{
		i++;
		len--;
	}	
	if (little[i] == 0)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!ft_strncmp(little, "", 2))
		return ((char *)big);
	while (*big && len)
	{
		if (check_substr(big, little, len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
