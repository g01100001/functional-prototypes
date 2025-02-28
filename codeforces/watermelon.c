/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   watermelon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:29:28 by gomandam          #+#    #+#             */
/*   Updated: 2024/11/27 15:50:59 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_even(int number)
{
	if (number % 2 == 0)
		write(1, "Even", 4);
	if (number % 2 == 1)
		write(1, "Odd", 3);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	nbr;

	nbr = atoi(argv[1]);
	ft_even(nbr);
	nbr = atoi(argv[2]);
	ft_even(nbr);
	return (0);
}
