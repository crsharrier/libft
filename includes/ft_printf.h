/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:42:22 by crsharrier        #+#    #+#             */
/*   Updated: 2024/05/03 10:00:01 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_printflags	t_printflags;
typedef void				(*t_printconv)(va_list args, t_printflags *flags);
struct						s_printflags
{
	char					pos_int_prefix;
	char					*pre_str;
	char					*num_str;
	char					*pad_str;
	bool					prepend_hex;
	bool					is_zero_padded;
	bool					is_left_aligned;
	bool					precision_provided;
	int						min_width;
	int						precision;
	t_printconv				convert;
};
t_printflags				init_flags(void);
t_printflags				parse_flags(const char **fstring, int *i);
t_printconv					get_conversion(char flag);
int							ft_printf(const char *fstring, ...);
int							ft_space(char c);
unsigned int				ft_unsigned_atoi(const char *str);
unsigned long long			ft_power(unsigned long long nb, int power);
unsigned long long			ft_ullong_atoi(const char *str);
void						di_pre_str(int i, t_printflags *flags);
void						conv_di(va_list args, t_printflags *flags);
void						conv_u(va_list args, t_printflags *flags);
void						conv_x(va_list args, t_printflags *flags);
void						conv_x_upper(va_list args, t_printflags *flags);
void						conv_c(va_list args, t_printflags *flags);
void						conv_s(va_list args, t_printflags *flags);
void						conv_p(va_list args, t_printflags *flags);
char						*ft_unsigned_itoa(unsigned int nb);
char						*hex_convert(char *dec_str, int caps);
char						*hex_convert_long(char *dec_str, int caps);
char						*ft_ullong_itoa(unsigned long long int nb);
# ifdef BONUS

void						add_min_width(char **num_str, t_printflags *flags);
void						add_precision(t_printflags *flags);
void						abs_num_str(char **num_str);
int							get_min_width(const char *fstring);
int							get_precision(const char *fstring);
# endif
#endif