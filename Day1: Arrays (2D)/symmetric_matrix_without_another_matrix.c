/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symmetric_matrix_without_another_matrix.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:08:30 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:08:32 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int	*n1, int	*n2)
{
	int	swa;

	swa = *n1;
	*n1 = *n2;
	*n2 = swa;
}

void	transpose(int	row, int	column, int	arr[row][column])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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

int	is_symmetric(int	row, int	column, int	arr[row][column])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		j = i + 1;
		while (j < column)
		{
			if (arr[i][j] != arr[j][i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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
	int	i;
	int	j;

	printf("Enter how many rows in the matrix: ");
	scanf("%d", &row);
	printf("Enter how many columns in the matrix: ");
	scanf("%d", &column);

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

	int	sym;

	if (row == column)
	{
		sym = is_symmetric(row, column, arr);
		transpose(row, column, arr);
		print_matrix(row, column, arr);
		if (sym == 1)
			printf("The matrix is symmetric\n");
		else
			printf("The matrix is not symmetric\n");
	}
	else
		printf("Size of rows must equal size of columns\n");
	return (0);
}
