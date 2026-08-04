/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:09:58 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:10:00 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sum_of_rows(int	r, int	c, int	target, int	arr[r][c])
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 0;
	sum = 0;
	while (i < r)
	{
		while (j < c)
		{
			sum += arr[i][j];
			j++;
		}
		if (sum != target)
			return (0);
		sum = 0;
		j = 0;
		i++;
	}
	return (1);
}

int	sum_of_columns(int	r, int	c, int	target, int	arr[r][c])
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 0;
	sum = 0;
	while (j < c)
	{
		while (i < r)
		{
			sum += arr[j][i];
			i++;
		}
		if (sum != target)
			return (0);
		sum = 0;
		i = 0;
		j++;
	}
	return (1);
}

int	sum_of_main_diagonal(int	r, int	c, int	target, int	arr[r][c])
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < r)
	{
		sum += arr[i][i];
		i++;
	}
	if (sum != target)
		return (0);
	return (1);
}

int	sum_of_secondary_diagonal(int	r, int	c, int	target, int	arr[r][c])
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = c - 1;
	sum = 0;
	while (i < r)
	{
		sum += arr[i][j];
		i++;
		j--;
	}
	if (sum != target)
		return (0);
	return (1);
}

void	print_matrix(int	r, int	c, int	arr[r][c])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < r)
	{
		while (j < c)
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
	int	row;
	int	column;

	printf("Enter how many rows: ");
	scanf("%d", &row);
	printf("Enter how many columns: ");
	scanf("%d", &column);

	int	arr[row][column];
	int	i;
	int	j;
	int	target;

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
	i = 0;
	j = 0;
	while (i < 1)
	{
		while (j < column)
		{
			target += arr[i][j];
			j++;
		}
		i++;
	}
	if (row != column)
		printf("Size of row must equal size of columns\n");
	else
	{
		int	r1;
		int	r2;
		int	r3;
		int	r4;

		r1 = sum_of_rows(row, column, target, arr);
		r2 = sum_of_columns(row, column, target, arr);
		r3 = sum_of_main_diagonal(row, column, target, arr);
		r4 = sum_of_secondary_diagonal(row, column, target, arr);
		print_matrix(row, column, arr);
		if (r1 && r2 && r3 && r4)
			printf("The matrix is a magic square\n");
		else
			printf("The matrix is not a magic square\n");
	}
}
