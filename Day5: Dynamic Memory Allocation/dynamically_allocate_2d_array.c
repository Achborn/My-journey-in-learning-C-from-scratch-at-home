/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamically_allocate_2d_array.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:42:49 by lnadifi           #+#    #+#             */
/*   Updated: 2025/12/08 22:19:53 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	row;
	int	column;

	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of columns: ");
	scanf("%d", &column);

	int	**p;
	int	i;
	
	p = malloc(row * sizeof(int *));
	i = 0;
	while (i < row)
	{
		p[i] = malloc(column * sizeof(int));
		i++;
	}

	int	j;
	int	k;
	int	l;

	j = 0;
	k = 1;
	l = 0;
	while (j < row)
	{
		while (l < column)
		{
			printf("Enter %d element: ", k);
			scanf("%d", &p[j][l]);
			l++;
			k++;
		}
		l = 0;
		k = 0;
		j++;
	}
	int	a;
	int	b;

	a = 0;
	b = 0;
	printf("Array: \n");
	while (a < row)
	{
		while (b < column)
		{
			printf("%d ", p[a][b]);
			b++;
		}
		b = 0;
		printf("\n");
		a++;
	}
	return (0);
}
