/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_splitter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:47 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 15:09:48 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*word_splitter(char	*str, char	*delim)
{
	static char	*new;
	static char	*start;

	if (str != NULL)
		start = str;
	if (new == NULL)
		return (NULL);
	while (*new != '\0')
	{
		if (*new == *delim)
		{
			*new = '\0';
			return(new);
		}
		new++;
	}
	new++;
	return (new);
}

int	main(void)
{
	char	text[] = "Hello World C language";
	char	*word;

	word = word_splitter(text, " ");
	while (word != NULL)
	{
		printf("%s\n", word_splitter(NULL, " "));
	}
}
