/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication_table_as_2D.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:09:23 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:09:25 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fill(int	r, int	c, int	arr[r][c])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < r)
	{
		while (j < c)
		{
			arr[i][j] = (i + 1) * (j + 1);
			j++;
		}
		j = 0;
		i++;
	}
}

void	print(int	r, int	c, int	arr[r][c])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < r)
	{
		while (j < c)
		{
			printf("%4d ", arr[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
}

int	main(void)
{
	int	table[10][10];

	fill(10, 10, table);
	print(10, 10, table);
	return (0);
}
