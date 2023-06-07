/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:22:39 by sloke             #+#    #+#             */
/*   Updated: 2023/06/07 09:21:21 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (del != NULL)
		{
			del(lst->content);
			free(lst);
		}
	}
}

/* lst->content is passed as an arg
properly free any dynamically allocated memory + cleanup for the content
deallocate the memory occupied by the node itself.
*/