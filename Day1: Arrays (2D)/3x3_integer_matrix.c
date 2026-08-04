/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3x3_integer_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:05:36 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:05:39 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fill_values(int	arr[][3])
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 3)
	{
		while (k < 3)
		{
			printf("Enter %d number: ", k + 1);
			scanf("%d", &arr[i][k]);
			k++;
		}
		k = 0;
		i++;
	}
}

int	main(void)
{
	int	arr[3][3];
	int	i;
	int	j;

	fill_values(arr);
	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < 3)
		{
			printf("%d ", arr[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
