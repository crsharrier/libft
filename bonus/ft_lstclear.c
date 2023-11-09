/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:21:27 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 11:38:32 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.

Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
*/

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *current_node;
    t_list  *next_node;

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