/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:27:44 by sloke             #+#    #+#             */
/*   Updated: 2023/05/19 11:06:45 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[x] && x < n)
	{
		if (haystack[x] == needle[y])
		{
			while (haystack[x + y] == needle[y] && (x + y) < n)
			{
				y++;
				if (needle[y] == '\0')
					return ((char *)&haystack[x]);
			}
		}
		x++;
	}
	return (0);
}

// int	main()
// {
// 	char	basket[] = "is it gonna rain today";
// 	char	fruits[] = "rain";
// 	char	*result = ft_strnstr(basket, fruits, 20);

// 	if (result != NULL)
// 	{
// 		printf("ouioui: %s", result);
// 	}
// 	return (0);
// }
/* 
n is the maximum number of characters to search within the haystack string 
*/