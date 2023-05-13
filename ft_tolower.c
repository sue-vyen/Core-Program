/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:18:59 by sloke             #+#    #+#             */
/*   Updated: 2023/05/13 13:28:08 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	else
		return (c);
	return (c);
}

// int	main()
// {
// 	char	rawr = 'e';
// 	char	meow = 'Y';

// 	printf("%c", ft_tolower(rawr));
// 	printf("%c", ft_tolower(meow));
// 	return (0);
// }
