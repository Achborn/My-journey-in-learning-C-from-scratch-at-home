/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_substraction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:06:57 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:06:59 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	subtract(int	arr1[][3], int	arr2[][3], int	arr3[][3])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 3)
	{
		while (col < 3)
		{
			arr3[row][col] = arr1[row][col] - arr2[row][col];
			col++;
		}
		col = 0;
		row++;
	}
}

int	main(void)
{
	int	arr1[3][3] = {{1, 3, 2}, {6, 5, 4}, {9, 8, 7}};
	int	arr2[3][3] = {{4, 5, 8}, {2, 6, 7}, {1, 9, 3}};
	int	arr3[3][3];

	subtract(arr1, arr2, arr3);

	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 3)
	{
		while (col < 3)
		{
			printf("%d ", arr3[row][col]);
			col++;
		}
		col = 0;
		printf("\n");
		row++;
	}
	return (0);
}
