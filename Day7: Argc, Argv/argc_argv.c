/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:17:00 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:17:05 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int	argc, char	*argv[])
{
	int	i;

	i = 0;
	while (i < argc) //argc = 3
	{
		printf("%s\n", *argv); 	//argv[0] = "./test" argv[1] = "hello" argv[2] = "world"
		i++;
		argv++;
	}
	return (0);
}
