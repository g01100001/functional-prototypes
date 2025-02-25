/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:57:03 by gomandam          #+#    #+#             */
/*   Updated: 2024/11/29 23:21:36 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_factorial(int n)
{
	if (n == 0)
		return (1);	
	if (n >= 1)
	{
		n = n * ft_factorial(n - 1);
		return (n);
	}	
	else
		return (0);
}

int main()
{
	printf("0! = %i\n", ft_factorial(0));
	printf("1! = %i\n", ft_factorial(1));
	printf("3! = %i\n", ft_factorial(3));
	printf("5! = %i\n", ft_factorial(5));
	return (0);
}

/*
Expected output:
0! = 1
1! = 1
3! = 6
5! = 120
*/
