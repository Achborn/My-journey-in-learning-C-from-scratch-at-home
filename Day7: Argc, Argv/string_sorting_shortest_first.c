/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_sorting_shortest_first.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:18:02 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:18:05 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 100

int	stlen(char	*str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	stcmp(char	*s1, char	*s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}

char	*stcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	sort(int	s,char	arr[s][SIZE])
{
	int	i;
	int	j;
	int	min;
	char	temp[SIZE];

	i = 0;
	j = 0;
	while (i < s - 1)
	{
		min = i;
		while (j < s - 1)
		{
			if (stlen(arr[j]) < stlen(arr[min]))
				min = j;
			j++;
		}
		stcpy(temp, arr[i]);
		stcpy(arr[i], arr[min]);
		stcpy(arr[min], temp);
		i++;
		j = i;
	}
}

int	main(int	argc, char	*argv[])
{
	char	arr[argc][SIZE];
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		stcpy(arr[i], argv[j]);
		i++;
		j++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("%s | ", arr[i]);
		i++;
	}
	sort((argc - 1), arr);
	i = 0;
	putchar('\n');
	while (i < argc - 1)
	{
		printf("%s | ", arr[i]);
		i++;
	}
	return (0);
}
