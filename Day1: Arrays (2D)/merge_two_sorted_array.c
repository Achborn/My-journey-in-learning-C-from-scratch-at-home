/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_two_sorted_array.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:49:44 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:50:35 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	merge_arrays(int	arr1[], int	size1, int	arr2[], int	size2, int	arr3[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size1 && j < size2)
	{
		if (arr1[i] <= arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
		}
		else if (arr2[j] <= arr1[i])
		{
			arr3[k] = arr2[j];
			j++;
		}
		k++;
	}
	if (i < size1)
	{
		while (i < size1)
		{
			arr3[k] = arr1[i];
			i++;
			k++;
		}
	}
	if (j < size2)
	{
		while (j < size2)
		{
			arr3[k] = arr2[j];
			j++;
			k++;
		}
	}
}

int	main(void)
{
	int	arr1[4] = {1, 3, 5, 7};
	int	arr2[4] = {1, 2, 5, 8};
	int	arr3[8];
	int	i;

	merge_arrays(arr1, 4, arr2, 4, arr3);
	i = 0;
	while (i < 8)
	{
		printf("%d ", arr3[i]);
		i++;
	}
	return (0);
}
