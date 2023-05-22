/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:31:42 by sloke             #+#    #+#             */
/*   Updated: 2023/05/22 16:14:46 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	pos;
	int	negtally;
	int	result;

	pos = 0;
	negtally = 1;
	result = 0;
	while (str[pos] == 32 || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	if (str[pos] == 43 || str[pos] == 45)
	{
		if (str[pos] == 45)
			negtally = -1;
			pos++;
	}
	while (str[pos] && str[pos] >= '0' && str[pos] <= '9')
	{
		result = result * 10;
		result += str[pos++] - '0';
	}
	result *= negtally;
	return (result);
}

// int	main(void)
// {
// 	char	str[] = "    -23AAAA45";

// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }
// if (postally <= 1)
// 	write(1, str[pos], pos);
// else if (postally > 1)
// 	return (0);

// if (negtally == 1)
// 	write(1, '-', 1);
// else
// 	return (0);

// if (!(str[1] >= 48) && !(str[1] <= 57))
// 	return (0);
// until it encounters a non-digit character or the null terminator 
// converts the sequence into integers

// conditions:
// not a valid integer rep. (ascii table) 48 to 57
// out of range of int data type 

// dosent recognise multiple operation symbols
// only one, either + OR -;