/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:43:05 by sloke             #+#    #+#             */
/*   Updated: 2023/06/07 10:56:52 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, unsigned int c, size_t n)
{
	size_t			pos;
	unsigned char	*new_s;

	pos = 0;
	new_s = (unsigned char *)s;
	while (pos < n)
	{
		if (new_s[pos] == (unsigned char) c)
			return ((void *)s + pos);
		pos++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "no you";

// 	printf("%s", ft_memchr(str, 'l', 6));
// 	return (0);
// }

/* finding the first occurence of a specific char
if it isn't found with the n bytes inputed,
return (NULL) / return (0);
if it is, the position of the first occurence should return;
slayyed kidney 
void pointer allows the f(x) to return a pointer to any type of data,
being called can be easier. */