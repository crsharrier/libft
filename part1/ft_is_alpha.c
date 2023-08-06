/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:03:08 by csharrie          #+#    #+#             */
/*   Updated: 2023/03/09 12:15:05 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char *c)
{
	int	result;

	result = 0;
	if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
		result = 1;
	return (result);
}

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (!((result == 1) && (is_alpha(str + i) == 1)))
			result = 0;
		i++;
	}
	return (result);
}
