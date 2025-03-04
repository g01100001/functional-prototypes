/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1write.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:14:37 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/19 13:48:24 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char test = 120;		/* print ASCII */
	char	*a = "Three";	/* print pointers */

	write(1, a, 5);
	write(1, "Two", 3);	/* print a string of characters */
	write(1, &test, 1);
	return (0);
}
