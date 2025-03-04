/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 01:44:01 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/26 03:33:42 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write (1, &str[count] ,1);
		count++;
	}
}

int	main(void)
{
	char	test[] = "string-arrays are always char";	

	ft_putstr(test);
	return (0);
}

//This prints an array of strings "string-arrays are always char"

