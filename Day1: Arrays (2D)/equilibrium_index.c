/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equilibrium_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:49:06 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:49:14 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	equilibrium_index(int	arr[], int	size)
{
	int	i;
	int	k;
	int	j;
	int	left_sum;
	int	right_sum;

	i = 0;
	while (i < size)
	{
		k = 0;
		j = size - 1;
		left_sum = 0;
		right_sum = 0;
		// calculate left_sum
		while (k < i)
		{
			left_sum += arr[k];
			k++;
		}
		// calculate right_sum
		while (j > i)
		{
			right_sum += arr[j];
			j--;
		}
		// now is the time to check if the left_sum equals to the right_sum
		if (left_sum == right_sum)
			return (i);
		i++;
	}
	return (-1);
}

int	main(void)
{
	int	size;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	int	num[size];
	int	i;
	int	res;

	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	res = equilibrium_index(num, size);
	if (res == -1)
		printf("There isn't an equilibrium index\n");
	else
		printf("Index %d is the equilibrium index\n", res);
	return (0);
}
