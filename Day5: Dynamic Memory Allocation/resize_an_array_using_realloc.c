/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_an_array_using_realloc.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:45:16 by lnadifi           #+#    #+#             */
/*   Updated: 2025/12/06 21:00:32 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*p;
	int	*p_tmp;
	int	i;
	int	n;
	int	n_size;

	printf("Enter size for array: ");
	scanf("%d", &n);
	p = malloc(n * sizeof(int));
	i = 0;
	while (i < n)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &p[i]);
		i++;
	}
	p_tmp = p;
	printf("Enter new size: ");
	scanf("%d", &n_size);
	p_tmp = realloc(p, n_size * sizeof(int));
	p = p_tmp;
	if (p == NULL)
		return (1);
	while (i < n_size)
	{
		printf("Enter %d number: ", i);
		scanf("%d", &p[i]);
		i++;
	}
	int	j;

	j = 0;
	while (j < n_size)
	{
		printf("%d ", p[j]);
		j++;
	}
	free(p);
	p = NULL;
	return (0);
}
