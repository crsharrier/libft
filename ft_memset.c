/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:22:54 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/04 09:13:58 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int				i;
	unsigned char	*p;

	p = s;
	i = 0;
	if (s == NULL)
		return (s);
	while (i < n)
		p[i++] = (unsigned char)c;
	return (s);
}
