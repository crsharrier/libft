/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:46:32 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 15:09:27 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char			*p;
	unsigned char	cc;

	p = (char *)s;
	cc = (unsigned char)c;
	while (*p)
	{
		if (*p == cc)
			return (p);
		p++;
	}
	if (cc == '\0')
		return (p);
	return (0);
}
