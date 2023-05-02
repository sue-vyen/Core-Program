/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:28:39 by sloke             #+#    #+#             */
/*   Updated: 2023/05/02 16:43:07 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int	input1 = '5';
	int	input2 = 'a';
	int	input3 = '7';

	printf("%d", ft_isalnum(input1));
	printf("%d", ft_isalnum(input2));
	printf("%d", ft_isalnum(input3));
	return (0);
}*/
