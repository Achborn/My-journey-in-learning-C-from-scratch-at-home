/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:20:14 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:12:17 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const char	*strst(const char	*str, const char	*nedd)
{
	const char	*current;
	const char	*st_comp;
	const char	*ned;

	current = str;
	st_comp = current;
	ned = nedd;
	while (*current != '\0')
	{
		st_comp = current;
		ned = nedd;
		if (*current == *ned)
		{
			while (*st_comp == *ned)
			{
				ned++;
				st_comp++;
			}
			return (current);
		}
		current++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Lahcen Nadifi has big dreams";
	char	neddle[] = "Nadifi";
	const char	*res;

	res = strst(str, neddle);
	printf("%s\n", res);
}
