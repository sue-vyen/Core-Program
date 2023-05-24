/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:28:23 by sloke             #+#    #+#             */
/*   Updated: 2023/05/24 14:58:04 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*substr;

	i = 0;
	j = 0;
	substr = malloc(len + 1);
	if (start <= 0 || ft_strlen(s) < start)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while (j < len)
			{
				substr[j] = s[i];
				j++;
				i++;
			}
		}
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	const char		*original;

// 	original = "Hello people, I'm surviving ";
// 	printf("%s\n", ft_substr(original, 6, 6));
// 	return (0);
// }
