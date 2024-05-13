/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 09:59:49 by crsharrier        #+#    #+#             */
/*   Updated: 2024/05/13 10:04:22 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Get the list node at the given index.

@param  head    Pointer to the head node of a t_list.
@param  index   The index to be returned from the list.
@return         Pointer to the node at the given index.
*/
t_list  *ft_lstget(t_list *head, int index)
{
    t_list  *current;
    int     i;

    i = 0;
    current = head;
    while (current)
    {
        if (i == index)
            return (current);
        i++;
        current = current->next;
    }
    return (NULL);
}