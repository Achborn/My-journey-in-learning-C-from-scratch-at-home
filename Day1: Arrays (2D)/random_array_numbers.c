/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_array_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:04:50 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:04:59 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	add_numbers(int	arr[], int	size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = rand() % 100;
		i++;
	}
}

void	print_reverse(int	arr[], int	size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		printf("%d ", arr[i]);
		i--;
	}
}

int	main(void)
{
	srand(time(0));
	int	size;

	printf("Enter how many numbers you want in the array (0 - 100): ");
	scanf("%d", &size);

	int	num[size];
	int	i;

	add_numbers(num, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
	putchar('\n');
	print_reverse(num, size);
	return (0);
}
