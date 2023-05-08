/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:31:38 by sloke             #+#    #+#             */
/*   Updated: 2023/05/08 13:43:49 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	const unsigned char	*new_src;

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
// 	char	src[] = "hello why is it so hot";
// 	char	dest[20];
// 	ft_memcpy(dest, src, 5);
// 	printf("%s", dest);
// 	return (0);
// }