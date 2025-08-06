/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:51:11 by gomandam          #+#    #+#             */
/*   Updated: 2025/08/06 23:50:05 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

# define BUFFER_SIZE 20

int main(void)
{
	int			fd; // open returns int datatype
	char		*read_chars; 
	ssize_t		read_return; //read returns ssize_t datatype

	read_chars = malloc(BUFFER_SIZE); //a place where to put your data in memory allocation
					// sizeof(char) * BUFFER_SIZE = number of bytes
	fd = open("text.txt", O_RDWR); //opens a file, with flags
	read_return = 1;
	while (read_return > 0)
	{
		read_return = read(fd, read_chars, BUFFER_SIZE);
		printf("saved_chars in the string readed_chars: %s\n", read_chars);
		printf("number of readed chars: %ld\n", read_return);
	}
	free(read_chars);  //liberate from heap memory after using malloc
	read_chars = NULL; //assign pointers to NULL after malloc
	return (0);
}
/* Manual for:
	open > int open(const char *pathname, int flags);
	read > ssize_t read(int fd, void *buf, size_t count);
	
	Static variables needs to be released using free and malloc
	Static variables persist for the entire duration of the program,
	unlike local variables, which are destroyed when the function exits.
  
     	Static variables declared inside a function are local to that function,
	but their value is retained between function calls.
	Thus, static varaibles inside the function = DECLARE & INITIALIZE IN THE SAME LINE.
*/
