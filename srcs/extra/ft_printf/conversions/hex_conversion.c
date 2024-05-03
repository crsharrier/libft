/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_conversion.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 06:12:15 by crsharrier        #+#    #+#             */
/*   Updated: 2024/04/29 14:10:31 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	result_len(unsigned long long dec_int, size_t *len)
{
	unsigned long long		division;

	*len += 1;
	division = dec_int / 16;
	if (division == 0)
		return (0);
	else
		return (result_len(division, len));
}

static int	hex_recur(unsigned long long dec_int, \
char *result, size_t *len, int caps)
{
	unsigned long long	division;
	unsigned long long	remainder;
	char				*hex_str;

	if (caps)
		hex_str = "0123456789ABCDEF";
	else
		hex_str = "0123456789abcdef";
	division = dec_int / 16;
	remainder = dec_int % 16;
	(*len)--;
	result[*len] = hex_str[remainder];
	if (division == 0)
		return (0);
	else
		return (hex_recur(division, result, len, caps));
}

char	*hex_convert(char *dec_str, int caps)
{
	unsigned int		dec_int;
	char				*result_str;
	char				*orig_result;
	size_t				len;
	size_t				i;

	len = 0;
	dec_int = ft_unsigned_atoi(dec_str);
	result_len(dec_int, &len);
	result_str = malloc(sizeof(char) * (len + 1));
	result_str[len] = '\0';
	i = 0;
	while (i < len)
		result_str[i++] = '.';
	orig_result = result_str;
	hex_recur(dec_int, result_str, &len, caps);
	return (orig_result);
}

static int	hex_recur_long(unsigned long long dec_int, \
char *result, size_t *len, int caps)
{
	unsigned long long		division;
	unsigned long long		remainder;
	char					*hex_str;

	if (caps)
		hex_str = "0123456789ABCDEF";
	else
		hex_str = "0123456789abcdef";
	division = dec_int / 16;
	remainder = dec_int % 16;
	(*len)--;
	result[*len] = hex_str[remainder];
	if (division == 0)
		return (0);
	else
		return (hex_recur(division, result, len, caps));
}

char	*hex_convert_long(char *dec_str, int caps)
{
	unsigned long long		dec_int;
	char					*result_str;
	char					*orig_result;
	size_t					len;
	size_t					i;

	len = 0;
	dec_int = ft_ullong_atoi(dec_str);
	result_len(dec_int, &len);
	result_str = malloc(sizeof(char) * (len + 1));
	result_str[len] = '\0';
	i = 0;
	while (i < len)
		result_str[i++] = '.';
	orig_result = result_str;
	hex_recur_long(dec_int, result_str, &len, caps);
	return (orig_result);
}
