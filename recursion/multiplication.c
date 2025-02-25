/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:33:49 by gomandam          #+#    #+#             */
/*   Updated: 2024/12/04 21:58:47 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Multiply using summation and recursion

#include <stdio.h>
#include <stdlib.h>

int	ft_multiply(int x, int y)
{
	if (x == 0 || y == 0)
		return (0);
	else if ( y > 0)
		x = x + ft_multiply(x, y - 1);
	else
		x = -ft_multiply(x, -y);
	return (x);
}

int	main(int argc, char *argv[])
{
	int	input1;
	int	input2;
	int	result;
	
	if (argc < 3)
	{
		printf("Multiply: input 2 numbers. \n");
		printf("%s (space separated)\n", argv[0]);
	}

	printf("Input1: %s\n", argv[1]);
	printf("Input2: %s\n", argv[2]);
	
	input1 = atoi(argv[1]);
	input2 = atoi(argv[2]);
	result = ft_multiply(input1, input2);
	
	printf("Result: %d\n", result);
	return (0);
}
