/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:25:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/08 10:45:47 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	char	*substring;
	char	*result;

	if (little == "")
		return (big);
	if (big == "")
		return (NULL);
	substring = little;
	while (*big && len)
	{
		if (*big == *substring)
		{
			result = big;
			while (*substring++ == *big && len--)
			{
				big++;
				len--;
				substring++;
			}
			if (*substring == '\0')
				return (result);
			substring = little;
		}
		big++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "HelloWorld";
	str2 = "llo";

	printf("str1 = \"Hello World\", str2 = \"llo\"\n");
	printf("Result for strnstr 4: %s\n", strnstr(str1, str2, 4));
	printf("Result for strnstr 9: %s\n", strnstr(str1, str2, 9));
	printf("Result for ft_strnstr 4: %s\n", strnstr(str1, str2, 4));
	printf("Result for ft_strnstr 9: %s\n", strnstr(str1, str2, 9));
	return (0);
}*/
