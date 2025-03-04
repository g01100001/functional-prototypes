/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 23:01:38 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/25 23:04:55 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char C)
{
	write(1, &C, 1);
}

int	main(void)
{
	char	letter;

	letter = 'a';
	ft_putchar(letter);
	return (0);
}

// return value is not needed because of void integer
