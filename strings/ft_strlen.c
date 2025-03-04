/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:40:55 by gomandam          #+#    #+#             */
/*   Updated: 2024/09/22 22:40:25 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}

int	main(void)
{
	char	test[] = "onetwo";
	int	str;

	str = ft_strlen(test);
	printf("The string '%s' has %d characters.\n", test, str);
	return (0);
}
