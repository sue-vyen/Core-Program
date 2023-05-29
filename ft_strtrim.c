/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:52:18 by sloke             #+#    #+#             */
/*   Updated: 2023/05/29 14:33:52 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}

// int	main(void)
// {
// 	char	*str = "from the beginning and the end of the string";
// 	char	*trim = "the";
// 	char	*result = ft_strtrim(str, trim);

// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
