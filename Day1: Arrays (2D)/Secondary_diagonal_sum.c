/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Secondary_diagonal_sum.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:07:30 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:07:32 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	second_diagonal(int	arr[3][3])
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 3 - 1;
	sum = 0;
	while (i < 3)
	{
		sum += arr[i][j];
		i++;
		j--;
	}
	return (sum);
}

int	main(void)
{
	int	arr[3][3] = {{5, 2, 6}, {1, 3, 8}, {9, 5, 7}};

	printf("Sum of second diagonal: %d\n", second_diagonal(arr));
	return (0);
}
