/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:22:54 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/08 10:23:59 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<strings.h>

void	*ft_memset(void *s, int c, int n)
{
	int	i;
	unsigned char *p = s;

	i = 0;
	if(s == NULL)
		return(s);
	while(i < n)
		p[i++] = (unsigned char)c;
	return(s);
}

int	main()
{
	int i;
	char buffer[10];
	char ft_buffer[10];

	i = 0;

	printf("buffer before = ");
	while(i < 10)
		printf("%c", buffer[i++]);
	printf("\n");
	i = 0;
	memset(buffer, 'd', 10);
	printf("buffer after memset(buffer, 'd', 10) = ");
	while(i < 10)
		printf("%c", buffer[i++]);
	printf("\n");


	i = 0;
	printf("ft_buffer before = ");
	while(i < 10)
		printf("%c", ft_buffer[i++]);
	printf("\n");
	i = 0;
	ft_memset(ft_buffer, 'd', 10);
	printf("ft_buffer after ft_memset(buffer, 'd', 10) = ");
	while(i < 10)
		printf("%c", ft_buffer[i++]);
	printf("\n");

	return(0);
}
