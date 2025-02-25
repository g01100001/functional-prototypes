/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:58:50 by gomandam          #+#    #+#             */
/*   Updated: 2024/12/10 16:14:24 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long long	ft_fibonacci(int fn)
{
	if (fn == 0 || fn < 0)
		return (0);
	if (fn == 1)
		return (1);
	else
	{
		fn = ft_fibonacci(fn - 1) + ft_fibonacci(fn - 2);
		return (fn);
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		return (-1);

	int		number;
	unsigned long	fibonacci;

	number = atoi(argv[1]);
	fibonacci = ft_fibonacci(number);
	printf("Fibonacci Sequence of %d is %lu\n", number, fibonacci);
//	printf("ULONG: %lu", sizeof(unsigned long));
//	printf("ULLONG: %lu", sizeof(unsigned long long));
}
