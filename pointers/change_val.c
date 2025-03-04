/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_val.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:49:03 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/15 02:23:39 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ult(int *test)
{
	*test = 42;
}

int	main(void)
{
	int	changed_val;

	changed_val = 33;
	printf("Change this Value: %d\n", changed_val);
	ft_ult(&changed_val);
	printf("New Value: %d\n", changed_val);
	return (0);
}
