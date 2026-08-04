/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_multiplication.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:06:47 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:06:49 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	multiplication(int	row1, int	column1, int	row2, int	column2, int	arr1[][column1], int	arr2[][column2], int	arr3[][column2])
{
	int	i;
	int	j;
	int	k;
	int	sum;

	i = 0;
	j = 0;
	k = 0;
	sum = 0;
	while (i < row1)
	{
		while (j < column2)
		{
			sum = 0;
			while (k < row2 && k < column1)
			{
				sum += arr1[i][k] * arr2[k][j];
				k++;
			}
			k = 0;
			arr3[i][j] = sum;
			j++;
		}
		j = 0;
		i++;
	}
}

void	print_matrix(int	row, int	column, int	arr[row][column])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		while (j < column)
		{
			printf("%d ", arr[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
}

int	main(void)
{
	int	row1;
	int	column1;

	printf("Enter how many rows in the first matrix: ");
	scanf("%d", &row1);
	printf("Enter how many columns in the first matrix: ");
	scanf("%d", &column1);

	int	arr1[row1][column1];
	int	i;
	int	j;

	i= 0;
	j = 0;
	while (i < row1)
	{
		while (j < column1)
		{
			printf("Enter %d number: ", j + 1);
			scanf("%d", &arr1[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');

	int	row2;
	int	column2;

	printf("Enter how many rows in the second matrix: ");
	scanf("%d", &row2);
	printf("Enter how many columns in the second matrix: ");
	scanf("%d", &column2);

	int	arr2[row2][column2];

	i = 0;
	j = 0;
	while (i < row2)
	{
		while (j < column2)
		{
			printf("Enter %d number: ", j + 1);
			scanf("%d", &arr2[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	int	arr3[row1][column2];
	if (column1 != row2)
	{
		printf("Number of column1 Must match number of row2\n");
		return (0);
	}
	else
	{
		multiplication(row1, column1, row2, column2, arr1, arr2, arr3);
		print_matrix(row1, column2, arr3);
	}
	return (0);
}
