/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:02:11 by sloke             #+#    #+#             */
/*   Updated: 2023/05/21 17:30:14 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srcpos;

	srcpos = 0;
	dstlen = ft_strlen(dst);
	if (dstsize < dstlen + 1)
		return (dstsize + ft_strlen(src));
	while (srcpos < (dstsize - dstlen - 1) && src[srcpos])
	{
		dst[srcpos + dstlen] = src[srcpos];
		++srcpos;
	}
	dst[srcpos + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}

// int	main()
// {
// 	char	dst[20] = "no";
// 	char	src[] = "youyouyou";

// 	size_t	results = ft_strlcat(dst, src, 1);

// 	printf("%zu\n", results);
// 	printf("%s\n", dst);
// 	return (0);
// }
/*
+ 1 -> to accomodate the null terminator
if part for truncation.
return value is to show what would have been the number of characters
concated if there were enough space.
inside loop:
checks if there is remainding space after subtracting the space taken
up by the dst, -1 for null terminator accomodation.

[dst][src]
*/