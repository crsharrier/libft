/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:37:17 by csharrie          #+#    #+#             */
/*   Updated: 2023/03/16 14:23:10 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	char	*substring;

	if (to_find == 0)
		return (str);
	if (str == 0)
		return (0);
	substring = to_find;
	while (*str)
	{
		if (*str == *substring)
		{
			needle = str;
			while (*substring == *str)
			{
				str++;
				substring++;
			}
			if (*substring == '\0')
				return (needle);
			substring = to_find;
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hello World";
	str2 = "llo";
	printf("str1 = \"Hello World\", str2 = \"llo\"\n");
	printf("Result for strstr: %s\n", strstr(str1, str2));
	str1 = "Hello World";
	str2 = "llo";
	printf("Result for ft_strstr: %s\n", ft_strstr(str1, str2));
	return(0);
}
