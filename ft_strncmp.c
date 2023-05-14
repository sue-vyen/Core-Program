/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:20:06 by sloke             #+#    #+#             */
/*   Updated: 2023/05/14 11:41:26 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (s1[pos] && (pos < n - 1) && s1[pos] == s2[pos])
		pos++;
	return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
}

// int	main()
// {
// 	char    str1[] = "samoyed";
//     char    str2[] = "satoyed";

//     printf("%d\n", ft_strncmp(str1, str2, 2));
//     return (0);
// }
/* unsigned char is used to avoid the possibility of undefined behavior
char - char = neg/0/pos
unsigned char - unsigned char = non-negative*/