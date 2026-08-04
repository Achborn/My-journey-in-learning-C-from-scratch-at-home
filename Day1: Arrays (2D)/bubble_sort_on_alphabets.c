/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_on_alphabets.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:16:47 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:16:49 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define	SIZE 200

int	stlen(char	*str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
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

void	bubble_sort(int	s, char	str[s][SIZE])
{
	int	i;
	int	j;
	char	temp[SIZE];

	i = 0;
	j = 0;
	while (i < s)
	{
		while (j < s - 1)
		{
			if (stcmp(str[j], str[j + 1]) == 1)
			{
				stcpy(temp, str[j]);
				stcpy(str[j], str[j + 1]);
				stcpy(str[j + 1], temp);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int	main(void)
{
	char	names[5][SIZE];
	int	len;
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("Enter %d name: ", i + 1);
		fgets(names[i], 200, stdin);
		len = stlen(names[i]);
		if (len > 0 && names[i][len - 1] == '\n')
			names[i][len - 1] = '\0';
		i++;
	}
	i = 0;
	bubble_sort(5, names);
	while (i < 5)
	{
		printf("%s\n", names[i]);
		i++;
	}
}
