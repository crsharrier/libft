/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:07:08 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 09:12:30 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned long long	ull_max;
	unsigned long long	intended_size;
	void				*result;

	ull_max = 18446744073709551615ULL;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((unsigned long long)nmemb > ull_max / (unsigned long long)size)
		return (NULL);
	intended_size = nmemb * size;
	result = malloc(intended_size);
	ft_memset(result, '\0', intended_size);
	return (result);
}
