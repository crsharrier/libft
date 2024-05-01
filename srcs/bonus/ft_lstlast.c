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

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	if (lst == NULL)
		return (NULL);
	current_node = lst;
	while (current_node->next != NULL)
		current_node = current_node->next;
	return (current_node);
}
