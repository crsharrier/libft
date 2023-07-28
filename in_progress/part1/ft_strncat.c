/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:45:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/03/14 19:52:42 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (orig_dest);
}
