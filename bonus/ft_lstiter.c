/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:30:40 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 12:18:12 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.

Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
*/

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *current_node;

    if (lst == NULL)
        return ;
    current_node = lst;
    while (current_node->next)
    {
        f(current_node->content);
        current_node = current_node->next;
    }
    f(current_node->content);
}