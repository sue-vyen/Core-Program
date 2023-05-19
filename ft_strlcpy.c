/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:14:11 by sloke             #+#    #+#             */
/*   Updated: 2023/05/19 15:43:48 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == '\0')
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	return (ft_strlen(src));
}

// int	main()
// {
// 	char	dst[20];
// 	char	src[] = "this needs to be copied over";

// 	printf("chars copied: %zu\n", ft_strlcpy(dst, src, 30));
// 	printf("dest str: %s\n", dst);
// 	return (0);
// }
/* 
while (src[i])
until -> dst[j] == size - 1 (to ensure space)
+ \0
return : total length of the source string / 
total length of the string they tried to create
if >= dst size, output is truncated (cut down, slimmed down)*/