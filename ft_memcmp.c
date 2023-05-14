/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:41:07 by sloke             #+#    #+#             */
/*   Updated: 2023/05/14 14:24:46 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			pos;
	unsigned char	*str1;
	unsigned char	*str2;

	pos = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (pos < n)
	{
		if (str1[pos] != str2[pos])
			return (str1[pos] - str2[pos]);
		pos++;
	}
	return (0);
}

// int	main()
// {
// 	char    str1[] = "there is a strawberry bursting over there";
//     char    str2[] = "there is a satermelon bursting over there";

//     printf("%d\n", ft_memcmp(str1, str2, 20));
//     return (0);
// }