/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:43:19 by csharrie          #+#    #+#             */
/*   Updated: 2023/03/10 10:12:50 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include<stdio.h>

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	int	i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		if (c1 != c2)
			return (c1 - c2);
		s1++;
		s2++;
		i++;
	}
	return (c1 - c2);
}

int	main(void)
{
	int	arr1[5];
	int	arr2[5];

	memcpy(arr1, 
	arr1 = ;
	arr2 = ;
	printf("memcmp 3 = %i", memcmp(arr1, arr2, 3));
	printf("memcmp 7 = %i", memcmp(arr1, arr2, 7));
	printf("ft_memcmp 3 = %i", ft_memcmp(arr1, arr2, 3));
	printf("ft_memcmp 7 = %i", ft_memcmp(arr1, arr2, 7));
	return (0);
}
