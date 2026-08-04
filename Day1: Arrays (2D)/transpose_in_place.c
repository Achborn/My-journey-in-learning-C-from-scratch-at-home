/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transpose_in_place.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:07:39 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:07:41 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int	*p1, int	*p2)
{
	int	swap;

	swap = *p1;
	*p1 = *p2;
	*p2 = swap;
}

void	transpose(int	row, int	column, int	arr[row][column])
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		j = i + 1;
		while (j < column)
		{
			swap(&arr[i][j], &arr[j][i]);
			j++;
		}
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
	int	row;
	int	column;

	printf("Enter how many rows: ");
	scanf("%d", &row);
	printf("Enter how many columns: ");
	scanf("%d", &column);

	int	i;
	int	j;
	int	arr[row][column];

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
		transpose(row, column, arr);
		print_matrix(row, column, arr);
	}
	else
		printf("Number of rows must equal number of columns\n");

	return (0);
}
