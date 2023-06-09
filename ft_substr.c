/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:28:23 by sloke             #+#    #+#             */
/*   Updated: 2023/06/09 09:43:29 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (s == NULL)
		return (NULL);
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	if (start < 0 || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start <= len)
	{
		while (i < len)
		{
				substr[i] = s[start + i];
				++i;
		}
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	const char		*original;

// 	original = "Hello people, I'm surviving ";
// 	printf("%s\n", ft_substr(original, 0, 6));
// 	return (0);
// }
