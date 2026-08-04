/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:17:43 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:17:45 by lnadifi          ###   ########.fr       */
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

void	selection_sort(int	s, int	arr[])
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	while (i < s)
	{
		min = i;
		while (j <= s - 1)
		{
			if (arr[min] > arr[j])
				min = j;
			j++;
		}
		swap(&arr[i], &arr[min]);
		i++;
		j = i;
	}
}

int	main(void)
{
	int	size;

	printf("Enter how many numbers you want: ");
	scanf("%d", &size);

	int	arr[size];
	int	i;

	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i + 1);
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
	selection_sort(size, arr);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
