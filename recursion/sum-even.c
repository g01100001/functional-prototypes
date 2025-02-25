/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum-even.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:54:13 by gomandam          #+#    #+#             */
/*   Updated: 2024/12/09 22:06:23 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Summation of even numbers, and skipping odd.

int	ft_sumeven(int n)
{	
	if (n <= 0)
		return (0);
	if (n % 2 == 0)
	{
		n = n + ft_sumeven(n - 2);
		return (n);
	}
	else
	{
		n = ft_sumeven(n - 1);
		return (n);
	}
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{	
	if (argc < 2 || argc > 2)
	{
		printf("%s Invalid. Put an integer.\n", argv[0]);
		return (0);
	}
	int	result;
	int	input;

	input = atoi(argv[1]);
	result = ft_sumeven(input);
	printf("\nSummation of only even numbers: %d\n", result);
}

/*
Review the comparison of:
	n = n + ft_sumeven(n - 2);
		counts the even numbers 

	n = ft_sumeven(n - 1);
		this line continues the recursion without calculating
		thus, skipping the odd numbers.
*/
