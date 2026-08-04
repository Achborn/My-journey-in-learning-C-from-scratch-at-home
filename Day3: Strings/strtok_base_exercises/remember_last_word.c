/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remember_last_word.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:19 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 15:09:20 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*remember(char	*s)
{
	static char	*word;

	if (s != NULL)
	{
		word = s;
		return(word);
	}
	return(word);
}

int	main(void)
{
	printf("%s\n", remember("Hello"));
	printf("%s\n", remember(NULL));
	printf("%s\n", remember("World"));
}
