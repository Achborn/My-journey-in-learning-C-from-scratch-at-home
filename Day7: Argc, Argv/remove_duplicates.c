/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_duplicates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:03:18 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:03:22 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_atoi(char	*nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;

	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (num * sign);
}

void	swap(int	*n1, int	*n2)
{
	int	swap;

	swap = *n1;
	*n1 = *n2;
	*n2 = swap;
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
			if (arr[j] < arr[min])
				min = j;
			j++;
		}
		swap(&arr[min], &arr[i]);
		i++;
		j = i + 1;
	}
}

int	remove_dup(int	s, int	arr[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	while (i < s)
	{
		while (j < s)
		{
			if (arr[i] == arr[j])
			{
				k = j;
				while (j < s - 1)
				{
					arr[j] = arr[j + 1];
					j++;
				}
				s--;
				j = k;
			}
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (s);
}

int	main(int	argc, char	**argv)
{
	if (argc < 2)
	{
		printf("Please enter a sorted list of numbers\n");
		return (1);
	}

	int	numbers[argc - 1];
	int	i;
	int	j;
	int	new_size;

	i = 1;
	j = 0;
	while (i < argc)
	{
		numbers[j] = my_atoi(argv[i]);
		i++;
		j++;
	}
	selection_sort((argc - 1), numbers);
	new_size = remove_dup((argc - 1), numbers);
	if (new_size != argc - 1)
	{
		printf("Here is your sorted array after removing duplicates\n");
		i = 0;
		while (i < new_size)
		{
			printf("%d ", numbers[i]);
			i++;
		}
	}
	else
	{
		printf("Your array doesn't have any duplicates\n");
		i = 0;
		while (i < argc - 1)
		{
			printf("%d ", numbers[i]);
			i++;
		}
	}
	return (0);
}
