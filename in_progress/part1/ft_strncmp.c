/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:43:19 by csharrie          #+#    #+#             */
/*   Updated: 2023/03/16 13:54:56 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*(s1 + i) && (i < n - 1))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

/*
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "ll";

	printf("ft_strncmp = %i\n", ft_strncmp(str1, str2, 7));
	printf("strncmp = %i\n", strncmp(str1, str2, 7));
	return (0);
}*/
