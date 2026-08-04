/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search_on_a_sorted_array.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:48:51 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:48:53 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	binary_search(int	arr[], int	v, int	size)
{
	int	left;
	int	right;
	int	middle;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (v == arr[middle])
			return (middle);
		else if (v > arr[middle])
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}

int	main(void)
{
	int	size;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	int	arr[size];
	int	i;

	i = 0;
	while (i < size)
	{
		printf("Enter %d number (note the array should be sorted): ", i + 1);
		scanf("%d", &arr[i]);
		i++;
	}
	int	v;
	int	res;

	printf("Enter which value you want to look for: ");
	scanf("%d", &v);
	res = binary_search(arr, v, size);
	if (res == -1)
		printf("Not found\n");
	else
		printf("The value %d was found at index %d\n", v, res);
	return (0);
}
