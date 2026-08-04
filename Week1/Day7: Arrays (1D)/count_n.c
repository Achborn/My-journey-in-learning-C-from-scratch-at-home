/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 15:48:59 by lnadifi           #+#    #+#             */
/*   Updated: 2026/07/05 15:49:00 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count(int	*arr, int	size, int	n)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		if (*arr == n) 
			c++;
		arr++;
		i++;
	}
	return (c);
}

int	main(void)
{
	int	size;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	int	num[size];
	int	*p;
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

	i = 0;
	p = &num[i];
	printf("Enter which number to count: ");
	scanf("%d", &n);
	res = count(p, size, n);
	if (res == 0)
		printf("%d is not in the array\n", n);
	else
		printf("%d occurred %d times\n", n, res);
	return (0);
}
