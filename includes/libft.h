/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:32:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/07 14:37:27 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
unsigned int			ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

#endif
