/* ************************************************************************** */
/*                                                                       write(1, "\n", 1);write(1, "\n", 1);     */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:18:32 by gomandam          #+#    #+#             */
/*   Updated: 2024/11/13 03:11:08 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Use a pointer to print an asterisk.
//Print the address using typecast.

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*ipointer;
	char	var1 = 42;
	char	number = 65;
	char	*i;
	char	*s = "string\n";
	char	*str = "aether";	

	ipointer = &var1;		//assigned ipointer to the address of var1
	printf("%c\n", *ipointer);	//prints an asterisk since ipointer is now var1 = ascii 42
	printf("%p\n", (void *) ipointer); //memory address of the pointer in hexadecimal
					  // typecasted to (void *) since it is hexadecimal	
	ipointer = &number;	//changes or re-assigned ipointer to number which is ascii 65 'A'
	printf("%c\n", *ipointer); //a pointer called *ipointer is being printed = ascii 65 'A'

	i = &number;		//assigned the pointer i to the value address of number
	printf("%d\n", *i); // %d will print an integer of the value addressed in i = &number;
	
	write(1, s, 7); //expects the word "string" and newline
	write(1, "s", 1); //expects character 's' assuming it is a string
	write(1, i, 1); //expects letter A since ascii 65, passed as a pointer to number
	write(1, "\n", 1); //expects a newline (must be a string not a single char)
	
	write(1, &str[3], 1); 
		//can be &*s but will only print index 0, &str[3] prints index 3 which is 'h'
	write(1, "\n", 1);
	return (0);
}


//Use a pointer pointing to a pointer,
//pointing to a pointer, and that points a pointer;
//Just to print an ASTERISK.

/*
int	main(void)

{
	char	*pointer;
	char	**pointer2;
	char	***pointer3;
	char**** pointer4;
	char	var1 = 42;
	char	var2 = 98;

	pointer = &var1;
	pointer2 = &pointer;
	pointer3 = &pointer2;
	pointer4 = &pointer3;

	printf("%c\n", ****pointer4);
	printf("%d\n", var1);
	printf("%d\n", ****pointer4);
	printf("%c\n", var1);

	pointer = &var2;
//	printf("%c",(char *) pointer);
	printf("%ln trial", (long *) ****pointer4);
	return (0);
}
*/
