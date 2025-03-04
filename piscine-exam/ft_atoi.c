/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:14:56 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/08 04:04:55 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
static int	ft_sequence(int c)
{
	while ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}
*/

static int	ft_isspace(int c)
{
	int	is_blank;

	is_blank = c == ' ' || c == '\t';
	if (c == '\f' || c == '\n' || c == '\r' || c == '\v' || is_blank)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	ans;

	ans = 0;
	sign = 1;
	while (ft_isspace(*nptr))		//counts when there's whitespace, move via address
		nptr++;
	while (*nptr == '-' || *nptr == '+')	//
	{
		if (*nptr == '-')
		{
			sign *= -1;
			nptr++;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')	//checks for interval in ascii
	{
		ans = ans * 10 + (*nptr - '0'); //ascii is being used in the conversion		//ans starts at 0, then 0 * 10 = 0
		nptr++;				//ascii difference like 52-48='4'		//ans + nptr = 0 + 4 = 4 (tenth digit)
	}
	return (ans * sign);			//the integer after the function * sign value after passing through func whiiles
}
/*
int	main(void)
{
	const char *test1 = "1234";
	const char *test2 = "--5678";
	const char *test3 = "   +90abc";
	const char *test4 = "abc123";
	
	printf("input: %s \noutput: %d\n\n", test1, ft_atoi(test1));
	printf("input: %s \noutput: %d\n\n", test2, ft_atoi(test2));
	printf("input: %s \noutput: %d\n\n", test3, ft_atoi(test3));
	printf("input: %s \noutput: %d\n\n", test4, ft_atoi(test4));
	return (0);
}
*/
//c/66fc7cef-65f0-8008-8efa-095a3393536f
/*
int     ft_atoi(const char *nptr)
{
        int     i;
        int     sign;
        int     ans;

        i = 0;
        while (ft_sequence(nptr[i]))
                i++;
        if (nptr[i] == '-')
        {
                sign = -1;
                i++;
        }
//      else
//              (nptr[i] == '+');
        i++;
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
                ans = ans * 10 + (nptr[i] - '0');
                i++;
        }
        return (ans * sign);
}
*/
