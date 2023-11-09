/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:35:49 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 12:29:04 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *current_old;
    t_list  *current_new;

    if (lst == NULL)
        return (NULL);
    new_list = ft_lstnew(f(lst->content));
    if (new_list == NULL)
        return (NULL);
    current_old = lst;
    while (current_old->next != NULL)
    {
        current_new = ft_lstnew(f(current_old->next->content));
        if (current_new == NULL)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, current_new);
        current_old = current_old->next;
    }
    //ft_lstclear(&lst, del);
    // if ft_lstnew fails for any new node, use del to delete the list until now
    return (new_list);
}

