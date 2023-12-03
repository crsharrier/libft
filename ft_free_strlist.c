/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:44:33 by crsharrier        #+#    #+#             */
/*   Updated: 2023/12/03 09:11:27 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates over a list of strings.
Frees every pointer.
List must be null-terminated.
*/
void	ft_free_strlist(char **strlist)
{
	int	i;

	i = 0;
	while (strlist[i])
		free(strlist[i++]);
	free(strlist);
}
