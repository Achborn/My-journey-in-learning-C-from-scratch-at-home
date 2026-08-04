/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_diagonal_sum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:07:20 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:07:21 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main_diagonal(int	arr[3][3])
{
	int	sum;
	int	i;

	i = 0;
	while (i < 3)
	{
		sum += arr[i][i];
		i++;
	}
	return (sum);
}

int	main(void)
{
	int	arr[3][3] = {{3, 1, 2}, {5, 7, 6}, {4, 9, 8}};

	printf("Main diagonal sum: %d", main_diagonal(arr));
	return (0);
}
