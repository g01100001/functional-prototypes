/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:07:52 by gomandam          #+#    #+#             */
/*   Updated: 2024/11/29 19:37:58 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recurse(int n)
{
 	if (n > 0)
		n = 1 + ft_recurse(n - 1);
	return (n);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int	input;
	int	result;

	input = atoi(argv[1]);
	result = ft_recurse(input);
	printf("%d", result);
}
