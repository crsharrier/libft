/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:54 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/14 08:33:53 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(const char *s)
{
	char	*new_str;
	int		trim_start;
	int		trim_end;
	int		new_len;
	int		i;

	trim_start = 0;
	while (is_space(s[trim_start]))
		trim_start++;
	trim_end = trim_start;
	while (s[trim_end])
		trim_end++;
	while (is_space(s[trim_end - 1]))
		trim_end--;
	new_len = trim_end - trim_start;
	new_str = malloc(sizeof(char) * new_len);
	s += trim_start;
	i = 0;
	while (new_len)
	{
		new_str[i++] = *s++;
		new_len--;
	}
	return (new_str);
}
