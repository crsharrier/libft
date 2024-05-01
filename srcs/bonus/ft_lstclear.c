/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:21:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 13:03:48 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (*lst == NULL)
		return ;
	current_node = *lst;
	while (current_node->next)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	ft_lstdelone(current_node, del);
	*lst = NULL;
}
