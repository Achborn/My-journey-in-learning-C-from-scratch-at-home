/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:10:30 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:10:32 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	stlen(char	*str)
{
	int	i;

	i = 0;
	while(*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*stcat(char	*src, char	*dst, int	l)
{
	int	i;
	int	j;

	i = l;
	j = 0;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(void)
{
	char	st1[30] = "Lahcen ";
	char	st2[15] = "Nadifi";
	int	len;

	len = stlen(st1);
	printf("%s", stcat(st2, st1, len));
	return (0);
}
