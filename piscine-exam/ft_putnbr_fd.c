/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:29:18 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/13 14:42:45 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (-2147483648 <= nbr && nbr <= 2147483647)
	{
		if (nbr == -2147483648)
			ft_putstr_fd("-21474833648", fd);
		else if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar_fd('-', fd);
			ft_putnbr_fd((int)nbr, fd);
		}
		else if (nbr >= 10)
		{
			ft_putnbr_fd((int)(nbr / 10), fd);
			ft_putnbr_fd((int)(nbr % 10), fd);
		}
		else
			ft_putchar_fd((int)nbr + '0', fd);
	}
}

int	main(void)
{
	int	number;

	number = -100000;
	ft_putnbr_fd(number, 1);
	return (0);
}

