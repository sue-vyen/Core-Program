/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:49:26 by sloke             #+#    #+#             */
/*   Updated: 2023/06/02 10:11:24 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countchr(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s)
	{
		count++;
		s++;
	}
	return (count);
}

static int	words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
			s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**banana;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	banana = malloc(sizeof(char *) * (words(s, c) + 1));
	if (!banana)
		return (NULL);
	banana[0] = NULL;
	while (*s)
	{
		if (countchr(s, c) != 0)
		{
			banana[i] = ft_substr(s, 0, countchr(s, c));
			s = s + countchr(s, c);
			++i;
		}
		else
			++s;
	}
	banana[i] = NULL;
	return (banana);
}

// int	main(void)
// {
// 	char const	*s = "Hello, world, this, is, a, test";
// 	char		c = ',';
// 	char		**result = ft_split(s, c);

// 	if (result)
// 	{
// 		int	i = 0;
// 		while (result[i])
// 		{
// 			printf("%s\n", result[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (result[i])
// 		{
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	return (0);
// }
/*
creates an array or list to store the resulting substrings
iterates over the input string, to look for more delimiter occurences
while input string not null
if delimiter encountered,
then copy string bfr delimiter,
add it to array/list
return array and list

making an alternative if memory allocation fails is good practice
banana[0] = NULL -> this is done to mark the end of the array
s = s + countchr(s, c) -> updates the s pointer to skip the processed
substring and point to the next part of the string
*/