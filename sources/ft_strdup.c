/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:00:20 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/04 16:02:43 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (*(src + i))
		i++;
	dest = malloc(sizeof(char) * i);
	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*str1 = "Hello";
	printf("Source = %s\n", str1);
	printf("Destination = %s\n", ft_strdup(str1));
	printf("Destination = %s\n", strdup(str1));

}*/
