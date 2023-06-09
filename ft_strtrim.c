/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:52:18 by sloke             #+#    #+#             */
/*   Updated: 2023/06/09 14:46:08 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}

// int	main(void)
// {
// // 	// char	*str = "the from the beginning and the end of the string the";
// // 	// char	*trim = "the";
// // 	char	*result = ft_strtrim("abcdba", "abc");

// // 	printf("%s\n", result);
// // 	free(result);
// // 	return (0);

// 	char *test = ft_substr("0123456789", 9, 10);
// 	printf("res2: %s\n", test);
// 	free(test);
// 	return (0);
// }
