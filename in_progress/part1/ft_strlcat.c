/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:45:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/03/16 10:01:07 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*orig_dest;

	i = 0;
	orig_dest = dest;
	while (*dest)
		dest++;
	while (*(src + i) && i < (size - str_len(orig_dest) - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	size = 0;
	while (*orig_dest)
	{
		orig_dest++;
		size++;
	}
	return (size);
}
