/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:42:14 by crsharrier        #+#    #+#             */
/*   Updated: 2024/05/01 11:04:23 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_c(va_list args, t_printflags *flags)
{
	char	*str;
	char	c;

	c = va_arg(args, int);
	if (!c)
	{
		write(1, "\0", 1);
		str = ft_strdup("");
	}
	else
	{
		str = malloc(sizeof(char) * 2);
		str[1] = '\0';
		str[0] = c;
	}
	flags->num_str = str;
}

void	conv_s(va_list args, t_printflags *flags)
{
	char	*str;
	char	*m_str;
	size_t	len;

	str = va_arg(args, char *);
	if (!str)
		m_str = ft_strdup("(null)");
	else
	{
		len = ft_strlen(str);
		m_str = malloc(sizeof(char) * len + 1);
		ft_strlcpy(m_str, str, len + 1);
	}
	flags->num_str = m_str;
}

/*
Sets flags->pre_str to either "", " ", "0", "+" or "-", 
according to bonus flags and whether i < 0.
Frees previous flags->pre_str.
*/
void	di_pre_str(int i, t_printflags *flags)
{
	char	prefix;
	char	*new_pre_str;
	int		start_size;

	prefix = flags->pos_int_prefix;
	start_size = 1;
	if ((prefix != '_' && i >= 0) || i < 0)
		start_size = 2;
	new_pre_str = malloc(sizeof(char) * start_size);
	new_pre_str[start_size - 1] = '\0';
	if (prefix != '_' && i >= 0)
		new_pre_str[0] = prefix;
	if (i < 0)
		new_pre_str[0] = '-';
	free(flags->pre_str);
	flags->pre_str = new_pre_str;
}

void	conv_di(va_list args, t_printflags *flags)
{
	int		i;
	char	*str;

	i = va_arg(args, int);
	str = ft_itoa(i);
	free(flags->num_str);
	flags->num_str = str;
}

void	conv_u(va_list args, t_printflags *flags)
{
	unsigned int	u;
	char			*str;

	u = va_arg(args, unsigned int);
	if (!u)
		flags->num_str = ft_strdup("0");
	str = ft_unsigned_itoa(u);
	free(flags->num_str);
	flags->num_str = str;
}
