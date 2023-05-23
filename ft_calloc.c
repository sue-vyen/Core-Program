/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:37:03 by sloke             #+#    #+#             */
/*   Updated: 2023/05/23 14:40:13 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*rtn;

	rtn = malloc(element_size * num_elements);
	if (!rtn)
		return (NULL);
	ft_bzero (rtn, num_elements);
	return (rtn);
}

// int main() {
//     // Test case 1: Allocating an array of integers
//     size_t num_integers = 5;
//     size_t integer_size = sizeof(int);
//     int *arr = ft_calloc(num_integers, integer_size);

//     if (arr != NULL) {
//         // Print the allocated memory
//         printf("Allocated array of integers:\n");
//         printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

//         // Test case 2: Allocating a string
//         size_t string_length = 10;
//         char *str = ft_calloc(string_length, sizeof(char));

//         if (str != NULL) {
//             // Print the allocated memory
//             printf("Allocated string:\n");
//             printf("%c %c %c %c %c %c %c %c %c %c\n",
// str[0], str[1], str[2], str[3], str[4], str[5], 
//str[6], str[7], str[8], str[9]);
//         }
//     }

//     return 0;
// }
// dynamically allocate memory for multiple elements 
// of a specified size
// and initialises them to zero.
// number of elements to allocate, size of each element

// calculates the total amount of memory required 
// based on the number of elements and the size of each element

// then initialises all the bytes of the allocated memory to zero 

// successful: returns a pointer to the allocated memory 
// fail: NULL

// useful when working with arrays or data structures that 
//need to be initalised to zero
// ensures that all the allocated memory is set to a known initial state.