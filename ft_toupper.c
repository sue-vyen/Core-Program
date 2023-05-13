/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:32:22 by sloke             #+#    #+#             */
/*   Updated: 2023/05/13 13:18:16 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
			c = c - 32;
	else
		return (c);
	return (c);
}

// int	main()
// {
// 	char	rawr = 'e';
// 	char	meow = 'Y';

// 	printf("%c", ft_toupper(rawr));
// 	printf("%c", ft_toupper(meow));
// 	return (0);
// }