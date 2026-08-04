/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_rows_and_columns.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:09:52 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:09:54 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sum_of_rows(int	r, int	c, int	arr[r][c])
{
	int	row;
	int	column;
	int	sum;

	row = 0;
	column = 0;
	sum = 0;
	while (row < r)
	{
		while (column < c)
		{
			sum = sum + arr[row][column];
			column++;
		}
		column = 0;
		printf("Sum of row %d: %d\n", row + 1, sum);
		sum = 0;
		row++;
	}
}

void	sum_of_columns(int	r, int	c, int	arr[r][c])
{
	int	row;
	int	column;
	int	sum;

	row = 0;
	column = 0;
	sum = 0;
	while (column < c)
	{
		while (row < r)
		{
			sum = sum + arr[row][column];
			row++;
		}
		row = 0;
		printf("Sum of column %d: %d\n", column + 1, sum);
		sum = 0;
		column++;
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

	int	arr[row][column];
	int	i;
	int	j;

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
	printf("\nSum of Rows: \n");
	sum_of_rows(row, column, arr);
	putchar('\n');
	printf("Sum of Columns: \n");
	sum_of_columns(row, column, arr);
	return (0);
}
