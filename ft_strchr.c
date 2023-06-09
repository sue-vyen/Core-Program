/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:52:01 by sloke             #+#    #+#             */
/*   Updated: 2023/06/09 10:42:07 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] == (unsigned char)c)
			return ((char *)str + pos);
		pos++;
	}
	if (str[pos] == (unsigned char)c)
		return ((char *)str + pos);
	return (0);
}

// int	main()
// {
// 	char str[] = "abcxdefghijklnmopqrstuvwxyz";

// 	printf("%s\n", ft_strchr(str, 'x'));
// 	return (0);
// }

/* 
1st arg = str to be searched
2nd arv = character to be searched in str
returns = pointer OR \0
stops the moment char is found OR str = \0
*/
