/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:56:43 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 09:19:10 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == 0)
		return (0);
	while (j < i)
	{
		new_str[j] = (*f)(j, s[j]);
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
