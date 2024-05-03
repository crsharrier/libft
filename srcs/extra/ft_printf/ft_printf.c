/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:39:59 by crsharrier        #+#    #+#             */
/*   Updated: 2024/05/01 11:04:23 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"

static void	free_flags(t_printflags *flags)
{
	if (flags->pre_str)
		free(flags->pre_str);
	if (flags->pad_str)
		free(flags->pad_str);
	if (flags->num_str)
		free(flags->num_str);
}

static void	putcountchar(int *count, char c)
{
	write(1, &c, 1);
	*count += 1;
}

/*
Takes a pointer to a pointer to the % char of the current specifier in fstring.
Parses the whole specifier until a conversion char is found, 
intialising and populating the flags struct.
Prints and counts the result.
Frees all memory used.
*/
static void	parse_specifier(const char **fstring, \
int *status, va_list args, int *i)
{
	t_printflags	flags;
	char			*str;

	(*fstring)++;
	if (**fstring == '%')
	{
		putcountchar(status, '%');
		(*i)++;
		(*fstring)++;
		return ;
	}
	flags = parse_flags(fstring, i);
	flags.convert(args, &flags);
	str = flags.num_str;
	if (flags.convert == &conv_c && !*str)
		(*status)++;
	while (*str)
		putcountchar(status, *str++);
	free_flags(&flags);
}

int	ft_printf(const char *fstring, ...)
{
	int		len;
	int		i;
	int		status;
	va_list	args;

	status = 0;
	len = ft_strlen((char *)fstring);
	va_start(args, fstring);
	i = 0;
	while (i < len)
	{
		if (*fstring == '%')
			parse_specifier(&fstring, &status, args, &i);
		else
		{
			putcountchar(&status, *fstring);
			fstring++;
		}
		i++;
	}
	va_end(args);
	return (status);
}
