/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:58:54 by sloke             #+#    #+#             */
/*   Updated: 2023/05/02 15:31:02 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	printf("%d", ft_isdigit(input1));
	printf("%d", ft_isdigit(input2));
	printf("%d", ft_isdigit(input3));
	return (0);
}*/
