/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:03:01 by gomandam          #+#    #+#             */
/*   Updated: 2024/11/28 14:47:36 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	write(1, "Argument Arrangement\n", 21);
	printf("First Argument: %s\n", argv[1]);
	printf("Last Argument: %s\n", argv[argc - 1]);
	printf("Program name: %s\n", argv[0]);
}

//int argc is the counter. Set the position of what array you want
//	last one = argc -1
//	first one = 1
//
//char *argv[] is the vector
//	last one = (argv[argc -1]);
//	index zero = argv[0] or program name
//	first one = argv[1];
// prints the argv[3] third element of string set input. ./a.out hi he ho

