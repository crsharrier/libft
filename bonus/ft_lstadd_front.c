/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:54:20 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/09 10:23:14 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Adds `new` to the beginning of `lst`. 

*lst is set to new i.e. the new, 'first' node.

*/

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst != NULL)
        new->next = *lst;
    *lst = new;
}