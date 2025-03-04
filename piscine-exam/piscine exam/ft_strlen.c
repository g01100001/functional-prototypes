/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:30:50 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/19 12:00:38 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
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
	char	string[] = "Please";
	char	string_length = ft_strlen(string);

	ft_strlen(string);
	printf("\n%d", string_length);
	printf("\n%s\n\n", string);
	return (0);
}
