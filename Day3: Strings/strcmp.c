/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:10:07 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:10:08 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	stcmp(char	*st1, char	*st2)
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
	char	st1[] = "Lahcen";
	char	st2[] = "abc";
	int	res;

	res = stcmp(st1, st2);

	if (res == 1)
		printf("st1 is larger than st2\n");
	else if (res == -1)
		printf("st1 is smaller than st2\n");
	else
		printf("st1 equals st2\n");
	return (0);
}
