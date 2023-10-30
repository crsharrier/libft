/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:07:08 by crsharrier        #+#    #+#             */
/*   Updated: 2023/10/30 08:42:53 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// size_t is of type: unsigned_int

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned long long	ull_max;
	unsigned long long	intended_size;
	void	*result;
	//unsigned int	size_max;

	ull_max = 18446744073709551615ULL;
	//size_max = (size_t)-1;
	if ((unsigned long long)nmemb > ull_max / (unsigned long long)size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	intended_size = nmemb * size;
	result = malloc(intended_size);
	ft_memset(result, '\0', intended_size);
	return (result);
}

/* Behaves as expected for (IMT_MAX, INT_MAX), but not for (INT_MIN, INT_MIN)*/