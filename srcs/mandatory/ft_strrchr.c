/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:38:12 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 09:17:01 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	int				i;
	unsigned char	cc;

	i = 0;
	p = (char *)s;
	cc = (unsigned char)c;
	while (*p)
	{
		i++;
		p++;
	}
	if (cc == '\0')
		return (p);
	while (i >= 0)
	{
		if (*p == cc)
			return (p);
		i--;
		p--;
	}
	return (0);
}
