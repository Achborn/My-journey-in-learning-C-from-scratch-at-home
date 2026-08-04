/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_each_row.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:09:36 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:09:39 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sum_of_row(int	r, int	c, int	arr[r][c])
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
		printf("Sum of row %d: %d\n", (i + 1), sum);
		sum = 0;
		j = 0;
		i++;
	}
}

int	main(void)
{
	int	arr[3][3];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < 3)
		{
			printf("Enter %d number: ", j + 1);
			scanf("%d", &arr[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	sum_of_row(3, 3, arr);
	return (0);
}
