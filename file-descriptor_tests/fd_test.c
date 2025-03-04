/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:11:53 by gomandam          #+#    #+#             */
/*   Updated: 2024/12/17 19:15:47 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	fd;
	size_t	ch_rd_return; //characters read and to be returned

	fd = open("gab.txt", O_RDWR | O_CREAT); //opens the FD as intended

	printf("File Descriptor: %d", fd); //prints what FD is it, auto 3

	printf("\nFD 0, 1, 2 are system assigned & connected to terminal.\n");
	write(0, "FD is 0\n", 8); //system assigned FD = 0, stdin
	write(1, "FD is 1\n", 8); // FD = 1, stdout
	write(2, "FD is 2\n", 8); // FD = 2, stderr

	write(fd, "Writes inside FD file.\n", 23);
	 			 //writes on FD with flags open/create
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	return (0);
}
