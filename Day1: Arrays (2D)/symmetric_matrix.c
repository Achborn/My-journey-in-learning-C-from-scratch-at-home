/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symmetric_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:08:04 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:08:18 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// let's try to solve if a matrix is symmetric. so first the rule says that only a square matrix can be symmetric and a symmetric matrix means that if the transpose equals the original matrix
#include <stdio.h>

void	transpose(int	row, int	column, int	arr[row][column], int	arr1[column][row])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			arr1[j][i] = arr[i][j];
			j++;
		}
		j = 0;
		i++;
	}
}

int	is_symmetric(int	row, int	column, int	arr[row][column], int	arr1[column][row])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			if (arr[i][j] != arr1[i][j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	print_matrix(int	row, int	column, int	arr1[][column])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			printf("%d ", arr1[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}

int	main(void)
{
	int	row;
	int	column;
	int	i;
	int	j;

	printf("Enter how many rows for the matrix: ");
	scanf("%d", &row);
	printf("Enter how many columns for the matrix: ");
	scanf("%d", &column);

	int	arr[row][column];
	int	arr1[column][row];
	int	sym;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			printf("Enter %d number: ", j + 1);
			scanf("%d", &arr[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	if (row == column)
	{
		transpose(row, column, arr, arr1);
		sym = is_symmetric(row, column, arr, arr1);
		print_matrix(row, column, arr1);
		if (sym == 1)
			printf("The matrix is symmetric\n");
		else
			printf("The matrix is not symmetric\n");
	}
	else
		printf("Size of rows must equal size of columns\n");
	return (0);

}
