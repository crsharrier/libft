/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:54 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/28 10:04:36 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_in(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_new_len(char const *s1, char const *set)
{
	int		trim_start;
	int		trim_end;

	trim_start = 0;
	while (is_in(s1[trim_start], set))
		trim_start++;
	trim_end = trim_start;
	while (s1[trim_end])
		trim_end++;
	if (trim_end != trim_start)
	{
		while (is_in(s1[trim_end - 1], set))
			trim_end--;
	}
	return (trim_end - trim_start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		new_len;
	int		i;

	new_len = get_new_len(s1, set);
	while (is_in(*s1++, set));
	s1--;
	new_str = malloc(sizeof(char) * (new_len + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (new_len)
	{
		new_str[i++] = *s1++;
		new_len--;
	}
	new_str[i] = '\0';
	return (new_str);
}
