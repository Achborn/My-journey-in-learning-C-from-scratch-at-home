/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_reader.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:32 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 15:09:33 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*next_char(char	*str)
{
	static char	*p;

	if (str != NULL)
	{
		p = str;
		return(p);
	}
	if (p == NULL)
		return (NULL);
	p++;
	return(p);
}

int	main(void)
{
	printf("%c\n", *next_char("Programming"));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
	printf("%c\n", *next_char(NULL));
}
