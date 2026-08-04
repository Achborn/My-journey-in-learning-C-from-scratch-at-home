/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:13:16 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:13:18 by lnadifi          ###   ########.fr       */
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

void	swap(char	*s1, char	*s2)
{
	char	temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

char	*strrev(char	*str)
{
	char	*left;
	char	*right;

	left = str;
	right = str + stlen(str) - 1;
	while (left < right)
	{
		swap(left, right);
		left++;
		right--;
	}
	return (str);
}

int	main(void)
{
	char	str[SIZE];

	printf("Enter a text to reverse: ");
	fgets(str, sizeof(str), stdin);

	int	len;

	len = stlen(str);
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';

	strrev(str);
	printf("%s\n", str);
	return (0);
}
