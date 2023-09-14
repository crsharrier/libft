/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:09:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/12 07:37:05 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include"libft.h"
#include"testing.h"

int	test_atoi(char *str)
{
	int	result;
	int	ft_result;

	result = atoi(str);
	ft_result = ft_atoi(str);
	//printf("Result for atoi(%s) = %i\n", str, result);
	//printf("Result for ft_atoi(%s) = %i\n", str, ft_result);
	if (result == ft_result)
		return (1);
	return (0);
}

int	main(void)
{
	char	*str1 = "---+--+1234ab567";
	char	*str2 = "1234";
	char	*str3 = "12 34";
	char	*str4 = "0";
	char	*str5 = "   39";
	int	pass;

	pass = 1;
	if (!test_atoi(str1))
		pass = 0;
	if (!test_atoi(str2))
		pass = 0;
	if (!test_atoi(str3))
		pass = 0;
	if (!test_atoi(str4))
		pass = 0;
	if (!test_atoi(str5))
		pass = 0;

	ok_ko("ft_atoi", pass);
	return(0);
}
