/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtok_basic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:40 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 15:09:42 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_delim(char	c, const char	*delim)
{
	while (*delim != '\0')
	{
		if (c == *delim)
			return (1);
		delim++;
	}
	return (0);
}

char	*sttok(char	*str, const char	*delim)
{
	static char *new;
	char	*start;

	if (str != NULL)
		new = str;
	if (new == NULL)
		return (NULL);

	while (is_delim(*new, delim))
		new++;
	if (*new == '\0')
		return (NULL);
	start = new;

	while (*new != '\0')
	{
		if (is_delim(*new, delim))
		{
			*new = '\0';
			new++;
			while (is_delim(*new, delim))
				new++;
			return (start);
		}
		new++;
	}
	new = NULL;
	return (start);
}

int	main(void)
{
	char	text[] = ",,,,,,Lahcen,,  ::;  Nadifi, is:; a ,,  beginner        programmer,, ";
	char	*token;

	token = sttok(text, " ,:;");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = sttok(NULL, " ,:;");
	}
}
