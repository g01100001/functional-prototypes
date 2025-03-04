/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:37:49 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/15 00:40:10 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_pointer(int *a)
{
	*a = 42;
}

int	main(void)
{ 
	int	b;

	b = 45;
	ft_pointer(&b);
	printf("%d\n", b);
	printf("Answer to life.\n");
}

/*
#include <unistd.h>
#include <stdio.h>

void    ft_pointer(int *a)
{
        *a = 42;
}

int     main(void)
{
        int     b;

        b = 44;
        ft_pointer(b);
        printf("%d\n", b);
        return (0);
}
*/
