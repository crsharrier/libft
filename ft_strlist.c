/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:45:11 by crsharrier        #+#    #+#             */
/*   Updated: 2023/12/03 09:09:11 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Takes a variable number of strings as arguments and returns a list of strings.
First argument is the number of strings expected.
Allocates memory on the heap.
*/
char	**ft_strlist(int num, ...)
{
	va_list	args;
	char	**result_list;
	char	*current;
	int	i;

	result_list = malloc(sizeof(char *) * num + 1);
	result_list[num] = NULL;
	va_start(args, num);
	i = 0;
	while (i < num)
	{
		current = ft_strdup(va_arg(args, char *));
		if (!current)
		{
			ft_free_strlist(result_list);
			return (NULL);
		}
		result_list[i] = current;
		i++;
	}
	va_end(args);
	return (result_list);
}
