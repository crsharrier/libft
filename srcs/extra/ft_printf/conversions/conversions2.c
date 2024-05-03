/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:39:56 by crsharrier        #+#    #+#             */
/*   Updated: 2024/05/01 11:05:57 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_p(va_list args, t_printflags *flags)
{
	unsigned long long	u;
	char				*dec_str;
	char				*hex_str;
	char				*str;

	u = va_arg(args, unsigned long long);
	if (!u)
		flags->num_str = ft_strdup("(nil)");
	else
	{
		dec_str = ft_ullong_itoa(u);
		hex_str = hex_convert_long(dec_str, 0);
		str = ft_strjoin("0x", hex_str);
		free(hex_str);
		free(dec_str);
		flags->num_str = str;
	}
}

void	conv_x(va_list args, t_printflags *flags)
{
	unsigned int	u;
	char			*dec_str;
	char			*hex_str;

	u = va_arg(args, unsigned int);
	if (!u)
	{
		flags->num_str = ft_strdup("0");
		return ;
	}
	dec_str = ft_unsigned_itoa(u);
	if (flags->prepend_hex)
		flags->pre_str = ft_strdup("0x");
	hex_str = hex_convert(dec_str, 0);
	free(dec_str);
	free(flags->num_str);
	flags->num_str = hex_str;
}

void	conv_x_upper(va_list args, t_printflags *flags)
{
	unsigned int	u;
	char			*dec_str;
	char			*hex_str;

	u = va_arg(args, unsigned int);
	if (!u)
	{
		flags->num_str = ft_strdup("0");
		return ;
	}
	dec_str = ft_unsigned_itoa(u);
	if (flags->prepend_hex)
		flags->pre_str = ft_strdup("0x");
	hex_str = hex_convert(dec_str, 1);
	free(dec_str);
	free(flags->num_str);
	flags->num_str = hex_str;
}
