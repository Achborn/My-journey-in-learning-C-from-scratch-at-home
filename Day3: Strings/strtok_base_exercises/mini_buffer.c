/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_buffer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:06 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 15:09:09 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*save(char	*str)
{
	static	char	*word;

	if (str != NULL)
	{
		word = str;
		return (word);
	}
	return (word);
}

int	main(void)
{
	save("World");
	save(NULL);
	save("Lahcen");
	printf("%s\n", save(NULL));
}
