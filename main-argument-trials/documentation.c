/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   documentation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:26:43 by gomandam          #+#    #+#             */
/*   Updated: 2024/07/10 19:16:27 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>		/* #library for unix standard or header */

void	ft_putchar(char x)	/* declaration -- function_name(parameter) */
{
	write (1, &x, 1);	/* function argument or equation */
}

int	main()			/* main_function, which you make your over-all instruction */
{				/* program starts to execute at main_function */
	ft_putchar ('x');	/* statements, functions and arguments */	
	ft_putchar (120);
	return(0);		/* return statements */
}

				/* main functin calls the arguments and declared functions */
				/* return indicates successful completion */
				/* deciding what to return: https://chatgpt.com/share/6095ae90-4a71-4bc1-97aa-bd21e43935af */

------------------------------------------------------------------------------

#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result;
    result = add(5, 3);  // Call the add function
    
    // Print the result
    printf("Result: %d\n", result);
    
    // Indicate successful completion
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;  // Return the sum of a and b
}

