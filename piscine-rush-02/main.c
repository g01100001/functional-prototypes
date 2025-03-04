/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:56:18 by gomandam          #+#    #+#             */
/*   Updated: 2025/02/26 16:52:08 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert an integer to a string of characters.
char	*convert_to_string(int num)
{
	// In this function, we convert the int to a string of chars.
	// Implementation would go here.
}

// Create a function that divides the char array into blocks of three
// Handles the remainder (X % 3).
// If the remainder is one or two, formats output:
// 1 : X YYY YYY
// 2 : XX YYY YYY
// If the remainder is 0, it formats it as: YYY YYY YYY
// Then we will retrieve the dictionary and use its values.

int	main(int argc, char *argv[])
{
	// Here we check if there is one or two arguments entered.
	if (argc == 2)
	{
		// Only a number has been introduced.
	}
	else if (argc == 3)
	{
		// There is a dictionary in argv[1] and the number in argv[2].
	}
	else
	{
		// Error: there are more than two arguments.
		printf("Error: Please provide one or two arguments only.\n");
		return (1);
	}
	return (0);
}
