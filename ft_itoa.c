/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:35:47 by sloke             #+#    #+#             */
/*   Updated: 2023/06/03 15:45:39 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnbr(int tmp)
{
	int	count;

	count = 0;
	if (tmp <= 0)
		count++;
	while (tmp)
	{
		tmp /= 10;
		++count;
	}
	return (count);
}

static char	*putnbr(char *value, int count, int n)
{
	while (n != 0)
	{
		value[count] = (n % 10) + '0';
		--count;
		n /= 10;
	}
	return (value);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*value;

	count = countnbr(n);
	value = malloc(sizeof(char) * (count + 1));
	if (!value)
		return (NULL);
	if (n == 0)
		value[0] = '0';
	value[count--] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			value[count--] = '8';
			n = -214748364;
		}
		n *= -1;
		value[0] = '-';
	}
	return (putnbr(value, count, n));
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-214));
// 	return (0);
// }
