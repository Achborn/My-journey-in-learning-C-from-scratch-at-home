/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stricmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:09:14 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:09:16 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sticmp(char	*st1, char	*st2)
{
	int	i;

	i = 0;
	while (st1[i] || st2[i])
	{
		if (st1[i] > st2[i])
			return (1);
		else if (st1[i] < st2[i])
			return (-1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	st1[] = "LaHcEn";
	char	st2[] = "lahcen";
	int	res;
	int	i;

	i = 0;
	while (st1[i] || st2[i])
	{
		if (st1[i] >= 'A' && st1[i] <= 'Z')
			st1[i] += 32;
		if (st2[i] >= 'A' && st2[i] <= 'Z')
			st2[i] += 32;
		i++;
	}
	res = sticmp(st1, st2);

	if (res == 1)
		printf("st1 Larger than st2\n");
	else if (res == -1)
		printf("st1 Smaller than st2\n");
	else
		printf("st1 equals st2");
	return (0);
}
