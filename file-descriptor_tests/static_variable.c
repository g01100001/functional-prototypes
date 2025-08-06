/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_variable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:22:17 by gomandam          #+#    #+#             */
/*   Updated: 2025/08/06 23:51:29 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

void	ft_static_variable()
{
	int		a;
	static int	b = 0; //static variable must be initialized in the same line

	a = 0;
	a++;
	b++;

	printf("value of a: %d\nvalue of b: %d\n\n", a, b);
}

int	main(int argc, char *argv[])
{
	if (argc < 0)
		return (0);
	
	int	n;
	int	count;

	n = 0;
	count = atoi(argv[1]);
	while (n < count)
	{
		ft_static_variable();
		n++;
	}
	return (0);
}
