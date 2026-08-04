/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_addition.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:06:10 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:06:12 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	addition(int	arr1[][3], int	arr2[][3], int	arr3[][3])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 3)
	{
		while (col < 3)
		{
			arr3[row][col] = arr1[row][col] + arr2[row][col];
			col++;
		}
		col = 0;
		row++;
	}
}

int	main(void)
{
	int	arr1[3][3] = {{1, 3, 2}, {6, 9, 8}, {6, 3, 2}};
	int	arr2[3][3] = {{4, 2, 1}, {8, 5, 7}, {9, 3, 2}};
	int	arr3[3][3];
	int	i;
	int	j;

	addition(arr1, arr2, arr3);
	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < 3)
		{
			printf("%d ", arr3[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
