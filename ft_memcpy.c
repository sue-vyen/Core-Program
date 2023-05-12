/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:31:38 by sloke             #+#    #+#             */
/*   Updated: 2023/05/12 11:00:41 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	const unsigned char	*new_src;

	if (!dest && !src)
		return (NULL);
	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
	while (n--)
	{
		*new_dest++ = *new_src++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[100] = "why is it so hot?" ;
// 	char	dest[100] = "global warming is the problem you know";
// 	ft_memcpy(dest, src, 10);
// 	printf("%s", dest);
// 	return (0);
// }

// the size_t part inputs the dest words if there 
// are from the nth part onwards. 
// replace the blank kinda thing.