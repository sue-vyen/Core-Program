/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:02:11 by sloke             #+#    #+#             */
/*   Updated: 2023/06/09 09:56:23 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srcpos;
	size_t	srclen;

	if (dst == NULL && src == NULL)
		return (0);
	srcpos = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize < dstlen + 1)
		return (dstsize + srclen);
	while (srcpos < (dstsize - dstlen - 1) && src[srcpos])
	{
		dst[srcpos + dstlen] = src[srcpos];
		++srcpos;
	}
	dst[srcpos + dstlen] = '\0';
	return (dstlen + srclen);
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