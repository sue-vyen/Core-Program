/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:56:36 by sloke             #+#    #+#             */
/*   Updated: 2023/05/07 13:14:53 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new;
	size_t			i;

	new = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new[i] = 0;
		i++;
	}
}

/*void	ft_bzero(void *s, size_t n)
{
	if (n == 0) return;
	if (s == NULL) return;

	unsigned char	*new;

	new = (unsigned char *)s;
	ft_memset(new, '/0', n);
}*/

// int	main(void)
// {
// 	char	hot[] = "hello why is it so hot";
// 	char	cold[] = "hello why is it so hot";

// 	ft_bzero(hot, 3);
// 	bzero(cold, 3);
// 	if (memcmp(hot, cold, 3) == 0) {
//         printf("ft_bzero and bzero work the same way.\n");
//     } else {
//         printf("ft_bzero and bzero do not work the same way.\n");
//     }
// 	return (0);
// }
