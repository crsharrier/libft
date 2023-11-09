/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:04:58 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/04 14:43:08 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
*/

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst != NULL)
        ft_lstlast(*lst)->next = new;
    else
        *lst = new;
}