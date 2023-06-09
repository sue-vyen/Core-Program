/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:27:44 by sloke             #+#    #+#             */
/*   Updated: 2023/06/09 14:59:42 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if ((haystack == NULL && needle == NULL) || n == 0)
		return (NULL);
	while (*haystack != '\0' && n-- >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
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