/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:11:50 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/11 00:51:44 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>		/* library of unix standard header */

int	main(void)		/* main function */
{
	char	c;		/* declare a variable in a function */

	c = 'L';		/* assigns the value of c to L, if ' ' pair is missing, it will assume an ASCII value */
	write(1, &c, 1);	/* function to write c, which will result L */
	return (0);
}
