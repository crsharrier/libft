/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:09:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/08 14:45:30 by csharrie         ###   ########.fr       */
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
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int	pass;

	str1 = "---+--+1234ab567";
	str2 = "1234";
	str3 = "12 34";
	str4 = "0";
	pass = 1;
	if (!test_atoi(str1))
		pass = 0;
	if (!test_atoi(str2))
		pass = 0;
	if (!test_atoi(str3))
		pass = 0;
	if (!test_atoi(str4))
		pass = 0;

	ok_ko("ft_atoi", pass);
	return(0);
}
