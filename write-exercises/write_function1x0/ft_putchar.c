/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:49:40 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/13 21:14:08 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PRACTICE EXERCISES AND REVIEW */

// Exercise: Make a character that displays a number or a sentence
/*
#include <unistd.h>

int	main(void)
{
	int	core;	// why does it still work if I changed the initialization of "char" to "int"
			// if changed to core = '12' and bytes 2 & even putting " " | warning: multi-character character constant [-Wmultichar] core = '12';
	core = '1';	// A declaration of a varialbe that displays a number.
	write(1, &core, 1);
}
*/


// Exercise: Make a character that displays a number
/*
#include <unistd.h>

void    ft_putchar(char core, char core2)	//These are arguments which we call as parameters
{
        write(1, &core, 1);			//
	write(1, &core2, 1);
}

int     main(void)
{
        char    core;				//The function of the pointer is to use the address, but why is it required to 
	char	core2;

	core2 = '2';
        core = '1';
        ft_putchar (core, core2);
        return (0);
}
*/


//Simply write a sentence
/*
#include <unistd.h>

int	main(void)
{
	write(1, "#hola", 5);
}
*/
