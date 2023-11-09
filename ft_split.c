/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:37:53 by crsharrier        #+#    #+#             */
/*   Updated: 2023/11/04 11:21:07 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*get_substr(char const *str, char delim)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i] != delim && str[i] != 0)
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	result[i] = 0;
	i = 0;
	while (str[i] != delim && str[i] != 0)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}

static int	count_words(char const *str, char delim)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != delim && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == delim)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**alloc_list(char const *s, char c)
{
	int		n_words;
	char	**str_list;

	n_words = count_words(s, c);
	str_list = malloc(sizeof(char *) * (n_words + 1));
	str_list[n_words] = NULL;
	return (str_list);
}

char	**ft_split(char const *s, char c)
{
	char	**str_list;
	int		i;
	int		j;
	int		in_word;

	str_list = alloc_list(s, c);
	if (count_words(s, c) == 0)
		return (str_list);
	i = 0;
	j = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			str_list[j++] = get_substr(s + i, c);
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (str_list);
}
