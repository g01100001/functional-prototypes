/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:03:00 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/30 22:15:41 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Make a function to take an average of given n number of arguments.
//Float is better for division to account for the modulus and remainder.

#include <stdio.h>
#include <stdarg.h>

float	ft_average(int n, ...)
{
	va_list	AP;
	float	total;
	int	i;

	va_start(AP, n);
	total = 0;
	i = 1;
	while (n >= i)
	{
		total = total + va_arg(AP, int);
		i++;
	}
	return ((float)(total / n));
}

int	main(void)
{
	float	n_total;
	float	total_average;

	n_total = 5;
	total_average = ft_average(n_total, 111*3, 9+2, 35/3, 33, 89);
	printf("\n%f\n", total_average);
	return (0);
}

//Now apply it with argc and argv to input while a.out 
