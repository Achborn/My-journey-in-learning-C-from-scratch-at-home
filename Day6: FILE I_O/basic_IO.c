/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_IO.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:18:28 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:20:45 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>	// this is where flags are (O_RDONLY, O_RDWR ....)
#include <unistd.h>     // and this is where low level IO functions are located

#define SIZE 5000

int	main(int	argc, char	**argv)
{
	int	fd;
	char	buff[SIZE];
	int	bytes;

	if (argc <= 1)
	{
		printf("Error no file was specified.\n");
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error openning the file.\n");
		return (1);
	}
	bytes = read(fd, buff, SIZE);
	if (bytes > 0)
		buff[bytes] = '\0';
	printf("%s\n", buff);
	close(fd);
	return (0);
}
