/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:54:17 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/11 19:59:43 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr) 
{
	*nbr = 42;
}

int	main() 
{
	int	*nbry;
	int	xy;
	xy = 3;
	nbry = &xy;
	printf("Original = %d\n", xy);
	ft_ft(nbry);
	printf("New value = %d\n", xy);
	return (0);
}
