/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:00:03 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 13:04:50 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current_node;

	if (lst == NULL)
		return (0);
	count = 1;
	current_node = lst;
	while (current_node->next)
	{
		current_node = current_node->next;
		count++;
	}
	return (count);
}
