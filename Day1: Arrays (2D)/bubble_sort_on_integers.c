/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_on_integers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:10:46 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:10:50 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int	*n1, int	*n2)
{
	int	temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int	bubble_sort(int	arr[], int	size)
{
	int	i;
	int	j;
	int	swapped;

	i = size - 1;
	j = 0;
	swapped = 0;		// 2,1,4,2,8	8 > 2 swap 8 > 1 swap 8 > 4 swap 8>2 swap
				// j = 0, i = 3 
				// 1,2,2,4,8    2 > 1 swap 2 > 4 no 4 > 2 swap
	while (i > 0)
	{
		while (j < i)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			return (0);
		j = 0;
		i--;
	}
	return (1);
}

int	main(void)
{
	int	size;

	printf("Enter size of the array: ");
	scanf("%d", &size);
	while ((getchar()) != '\n');

	int	arr[size];
	int	i;
	int	res;

	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i + 1);
		scanf("%d", &arr[i]);
		i++;
	}
	res = bubble_sort(arr, size);
	if (res == 0)
		printf("The array is already sorted\n");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}

}
