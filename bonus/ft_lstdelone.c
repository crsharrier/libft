/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csharrie <csharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:08:22 by csharrie          #+#    #+#             */
/*   Updated: 2023/11/04 19:01:54 by csharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*lst: The node to free.
del: The address of the function used to delete
the content.

- Takes a node as a parameter
- Frees the memory of the node’s content 
  using the function ’del’ given as a parameter
- Frees the node
- The memory of ’next’ does not need to be freed.*/

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst);
}