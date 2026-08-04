/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtok.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:29:04 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:11:54 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	static char	*new;
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
	char	text[] = ",,Lahcen is ,, a        Programmer,,. ";
	char	delim[] = ", .";
	char	*token;

	token = strtok(text, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	printf("%s\n", text);
	return (0);
}
