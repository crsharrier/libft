/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:43:41 by crsharrier        #+#    #+#             */
/*   Updated: 2024/05/01 11:05:30 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printflags	init_flags(void)
{
	t_printflags	flags;

	flags.pos_int_prefix = '_';
	flags.pre_str = NULL;
	flags.pad_str = NULL;
	flags.num_str = NULL;
	flags.prepend_hex = false;
	flags.is_zero_padded = false;
	flags.is_left_aligned = false;
	flags.precision_provided = false;
	flags.min_width = 0;
	flags.precision = 0;
	flags.convert = NULL;
	return (flags);
}

t_printconv	get_conversion(char flag)
{
	if (flag == 'c')
		return (conv_c);
	else if (flag == 's')
		return (conv_s);
	else if (flag == 'p')
		return (conv_p);
	else if (flag == 'd' || flag == 'i')
		return (conv_di);
	else if (flag == 'u')
		return (conv_u);
	else if (flag == 'x')
		return (conv_x);
	else if (flag == 'X')
		return (conv_x_upper);
	return (0);
}

#ifdef BONUS

static void	parse_bonus_flags(const char **fstring, t_printflags *flags)
{
	if (**fstring == '#')
		flags->prepend_hex = true;
	if (**fstring == '+' || **fstring == ' ')
		flags->pos_int_prefix = **fstring;
	if (**fstring == '0' && flags->min_width == 0 \
		&& flags->is_zero_padded == false)
		flags->is_zero_padded = true;
	if (**fstring == '-')
		flags->is_left_aligned = true;
	if (**fstring != '0' && ft_isdigit(**fstring) && flags->min_width == 0)
		flags->min_width = get_min_width(*fstring);
	if (**fstring == '.')
	{
		flags->precision_provided = true;
		flags->precision = get_precision(*fstring);
	}
}
#endif

t_printflags	parse_flags(const char **fstring, int *i)
{
	t_printflags	flags;

	flags = init_flags();
	while (flags.convert == NULL)
	{
		if (get_conversion(**fstring))
			flags.convert = get_conversion(**fstring);
		(*fstring)++;
		(*i)++;
	}
	return (flags);
}
