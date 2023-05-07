/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:50:59 by sloke             #+#    #+#             */
/*   Updated: 2023/05/07 12:46:57 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new;

	new = (unsigned char *)str;
	while (n--)
		*new++ = (unsigned char)c;
	return (str);
}

/*int	main(void)
{
	char	hot[] = "hello why is it so hot";
	printf("%s", ft_memset(hot, '4', 5));
	return (0);
}*/

/* new pointer pos points to the same & as str
the value in the & pointed by pos is given to c 
pos increases to the next byte in the memory block
replaces a set of block of memory to a specific value as stated in c and n*/