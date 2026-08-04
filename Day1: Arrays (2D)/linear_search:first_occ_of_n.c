/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_search:first_occ_of_n.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:49:29 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:49:31 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	first_occ(int	arr[], int	size, int	n)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == n)
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

	i = 0;
	while (i < size)
	{
		printf("Enter %d number: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	int	n;
	int	res;

	printf("Enter the number you want to look for: ");
	scanf("%d", &n);
	
	res = first_occ(num, size, n);
	if (res == -1)
		printf("The number your looking for is not in the array\n");
	else
		printf("The number is at index: %d\n", res);
	return (0);
}
