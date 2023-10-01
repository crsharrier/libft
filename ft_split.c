/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:37:53 by crsharrier        #+#    #+#             */
/*   Updated: 2023/09/15 07:08:37 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_delimiters(char const *s, char c)
{
	int	i;
	int	n_delimiters;

	i = 0;
	n_delimiters = 0;
	while (s[i])
	{
		if (s[i] == c)
			n_delimiters++;
		i++;
	}
	return (n_delimiters);
}

static int	*get_indices(char const *s, char c, int n_delimiters)
{
	int	i;
	int	j;
	int	*indices;

	i = 0;
	j = 0;
	indices = malloc(sizeof(int) * (n_delimiters + 2));
	indices[j++] = -1;
	while (s[i])
	{
		if (s[i] == c)
			indices[j++] = i;
		i++;
	}
	indices[j] = i;
	return (indices);
}

static void	ft_split_process(char const *s, char c, char **result, int n_delim)
{
	char	*substr;
	int		*indices;
	int		i;
	int		j;
	int		k;

	indices = get_indices(s, c, n_delim);
	result[n_delim + 1] = NULL;
	if (n_delim == 0)
		result[0] = (char *)s;
	i = 0;
	while (i < (n_delim + 1))
	{
		substr = malloc(sizeof(char) * (indices[i + 1] - indices[i]));
		j = indices[i] + 1;
		k = 0;
		while (j < indices[i + 1])
			substr[k++] = s[j++];
		substr[k] = '\0';
		result[i] = substr;
		i++;
	}
	free(indices);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n_delimiters;

	n_delimiters = count_delimiters(s, c);
	result = malloc(sizeof(char *) * (n_delimiters + 2));
	ft_split_process(s, c, result, n_delimiters);
	return (result);
}
