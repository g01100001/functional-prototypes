/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longwords.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:53:29 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/27 16:45:44 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	ft_longwords(char *s)
{
	int	length;

	length = ft_strlen(s);

//	if (s > 10)
		
	if (s < 10)
		write(1, &s, ft_strlen(s));
}

int	main(int argc, char *argv[])
{
	char	*str;

	str[] = "test-tickles";
	ft_longwords(str);
	printf("%s %s", argv[argc-1], str);
	write(1, "\n", 1);
	return (0);
}
