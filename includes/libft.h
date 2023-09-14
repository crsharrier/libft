/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:32:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/14 07:24:33 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

#ifndef LIBFT_H
# define LIBFT_H

size_t      ft_strlen(char *str);
void	*ft_bzero(void *s, int n);
void	*ft_memset(void *s, int c, int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char const *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char	    *ft_strcat(char *dest, char *src);
char	    *ft_strcpy(char *dest, char *src);
char	    *ft_strncat(char *dest, char *src, unsigned int nb);
char	    *ft_strstr(char *str, char *to_find);
char	    *ft_strdup(const char *src);
char	    *ft_strrchr(const char *s, int c);
char	    *ft_strchr(const char *s, int c);
char        *ft_strtrim(const char *s);
char        *ft_itoa(int nb);
char        *ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int			ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_atoi(char *str);
//int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int     ft_memcmp(void *s1, void *s2, size_t n);
int     ft_isascii(int c);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);


#endif
