/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:31:49 by sloke             #+#    #+#             */
/*   Updated: 2023/05/26 15:48:49 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
		return (NULL);
	while (*s1)
	{
		result[i] = *s1;
		++i;
		++s1;
	}
	while (*s2)
	{
		result[i] = *s2;
		++i;
		++s2;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	*prefix = "godo";
// 	char	*suffix = " turkey";

// 	printf("%s\n",ft_strjoin(prefix, suffix));
// 	return (0);
// }
