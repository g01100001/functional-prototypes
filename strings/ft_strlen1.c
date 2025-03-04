/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:41:06 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/17 14:58:21 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)	// data-type is int, so (int length) for
{				// calling a function in the main function
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(void)
{
	char	str_count[] = "Ubermensch";	//the argument or parameter

	int	length = ft_strlen(str_count);	//calling a function containing an argument
	printf ("%s ", str_count);
	printf ("is %d characters long. \n", length);
	return (0);
}
/*
#include <unistd.h>

int     ft_strlen(char *str)
{
        int     count;

        count = 0;
        while (str[count] != '\0')
        {
                count++;
        }
        return (count); //how does return display the count. Concept
			//e.g. return an ASCII
}
*/
