/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_integers_from_command_line.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:18:14 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:18:16 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_atoi(char	*nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr < '0' && *nptr > '9')
	{
		nptr++;
	}	
	if (*nptr == '-')
		sign = -1;

	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
		{
			num = num * 10 + (*nptr - '0');
		}
		nptr++;
	}
	return (num * sign);
}

int	sum(int	s, int	arr[s])
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < s - 1)
	{
		sum += arr[i];
		i++;
	}
	return (sum);
}

int	main(int	argc, char	*argv[])
{
	int	i;
	int	j;
	int	arr[argc];

	i = 1;
	j = 0;
	while (i < argc)
	{
		arr[j] = my_atoi(argv[i]);
		i++;
		j++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("%d ", arr[i]);
		i++;
	}
	int	res;
	res = sum(argc, arr);
	printf("\nSum: %d\n", res);
	return (0);
}
