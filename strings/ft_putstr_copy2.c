/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:37:59 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/16 13:57:24 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;				//counter
	while (str[i] != '\0')		//string does a loop until it finds a character. \0 terminator	
	{
		write(1, &str[i], 1);	//writes what is found in the memory address of the acual position of the string
		i++;			//increment the counter so it can loop
	}
}

int	main()
{
	char	u[] = "Hello";	//the [] means the variable 'u' is a string
	ft_putstr(u);	//call the function, and pass by argument of u[] 
	return (0);		//to finish main function
}
//
/*
 * [Study] if (!(i > 0)
 * 	   else if
*/
// i = 0; initializes the counter
// while (str[]) string does a loop until it finds a character \0 terminator
// write() writes what is found in the memory address of the
// 		actual position of the string
//i++; increments the counter so it can loop
//[] determines it is a string
