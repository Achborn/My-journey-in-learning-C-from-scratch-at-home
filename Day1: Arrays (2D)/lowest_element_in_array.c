/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_element_in_array.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:49:36 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:49:38 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	lowest_element(int	arr[], int	size)
{
	int	i;
	int	low;

	i = 0;
	low = arr[i];
	while (i < size)
	{
		if (arr[i] < low)
			low = arr[i];
		i++;
	}
	return (low);
}

int	main(void)
{
	int	size;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	int	num[size];
	int	i;

	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	int	lowest;

	lowest = lowest_element(num, size);
	printf("The lowest element in the array is: %d\n", lowest);
	return (0);
}
