/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_largest_element.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:50:44 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:50:47 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sec_larg(int	arr[], int	size)
{
	int	i;
	int	high;
	int	second;

	i = 0;
	high = arr[i];
	second = arr[i + 1];
	while (i < size)
	{
		if (arr[i] > high)
		{
			second = high;
			high = arr[i];
		}
		else
			if (arr[i] > second)
				second = arr[i];
		i++;
	}
	return (second);
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

	int	res;

	res = sec_larg(num, size);
	printf("Second larget element in the array: %d\n", res);
	return (0);
}
