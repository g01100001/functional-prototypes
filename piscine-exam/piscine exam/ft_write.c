/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:48:48 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/19 13:29:58 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write characters

#include <unistd.h>

void	ft_write(char G)
{
	write(1, "Gab\n", 4);
	write(1, &G, 1);
}

int	main(void)
{
	char gG;

	gG = 'g';
	ft_write(gG);
	return (0);
}
