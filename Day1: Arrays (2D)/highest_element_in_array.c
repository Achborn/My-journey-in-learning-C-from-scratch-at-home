/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_element_in_array.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:49:21 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:49:23 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	highest_element(int	arr[], int	size)
{
	int	i;
	int	high;

	i = 0;
	high = arr[i];
	while (i < size)
	{
		if (arr[i + 1] > high)
			high = arr[i + 1];
		i++;
	}
	return (high);
}

int	main(void)
{
	int	size;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	int	arr[size];
	int	i;
	int	highest;

	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i + 1);
		scanf("%d", &arr[i]);
		i++;
	}
	highest = highest_element(arr, size);
	printf("The highest element in your array is: %d\n", highest);
	return (0);
}
