/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_a_sentence_to_a_file.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:08:18 by lnadifi           #+#    #+#             */
/*   Updated: 2026/01/10 00:17:22 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int	fd;

	fd = open("file.txt", O_RDWR, 644);

	if(fd == -1)
	{
		printf("Error opening the file!");
		return (1);
	}

	write(fd, "Welcome to the world!\nThis is actually amazing, isn't it?\n", 58);
	close(fd);
	return (0);
}
