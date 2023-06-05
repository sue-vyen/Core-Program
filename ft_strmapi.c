/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:47:21 by sloke             #+#    #+#             */
/*   Updated: 2023/06/05 13:56:53 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	a = malloc(ft_strlen(s) + 1);
	if (!a)
		return (NULL);
	while (s[i])
	{
		a[i] = f(i, s[i]);
		++i;
	}
	a[i] = '\0';
	return (a);
}

// int	main(void)
// {
// 	char	*s = "gawk gawk";
// 	char	*result = ft_strmapi(s, f);
// 	printf("%s\n", result);
// 	return (0);
// }
