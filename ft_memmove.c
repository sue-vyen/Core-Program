/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:48:34 by sloke             #+#    #+#             */
/*   Updated: 2023/05/12 11:00:11 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	char	*new_src;

	new_dest = (char *)dest;
	new_src = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			new_dest[n] = new_src[n];
		return (dest);
	}
	while (n--)
		*new_dest++ = *new_src++;
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "i miss my bed";
// 	char	src[] = "rawr";

// 	ft_memmove(dest, src, 4);
// 	memmove (dest, src, 4);
// 	if (ft_memmove == &memmove)
// 	{
// 		printf("they are the same");
// 	}
// 	else
// 		printf("nope");
// 	return (0);
// }
/* converting them
covering the problem of overlapping data
-> if destination data is bigger than the source data

if the dest and src r the same buffer size 
then the src can just be copied over

if the dest buffer is bigger than the src
the dest buffer size will have to be changed into the
same size as the src buffer with '='

to start from the very end -> len - 1
-1 because arrays start from 0 so
if the size of buffer = len, then the last byte of the buffer is
len - 1. 

*/