/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:03:14 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 13:04:34 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list *lst, int index)
{
	t_list	*current_node;
	int	i;

	if (lst == NULL)
		return (NULL);
	i = 0;
	current_node = lst;
	if (index == 0)
		return(current_node);
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
		i++;
		if (index == i)
			return(current_node);
	}
	return (NULL);
}
