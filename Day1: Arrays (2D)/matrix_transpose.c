/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_transpose.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:07:07 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:07:10 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	transpose(int	row, int	col, int	arr1[row][col], int	arr2[col][row])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < col)
		{
			arr2[j][i] = arr1[i][j];
			j++;
		}
		j = 0;
		i++;
	}
}

int	main(void)
{
	int	row;
	int	column;

	printf("Enter how many rows: ");
	scanf("%d", &row);
	printf("Enter how many columns: ");
	scanf("%d", &column);

	int	arr1[row][column];
	int	arr2[column][row];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			printf("Enter %d number: ", j + 1);
			scanf("%d", &arr1[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	transpose(row, column, arr1, arr2);
	i = 0;
	j = 0;
	while (i < column)
	{
		while (j < row)
		{
			printf("%d ", arr2[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	return (0);
}
