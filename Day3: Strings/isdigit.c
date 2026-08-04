/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:16:36 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:16:37 by lnadifi          ###   ########.fr       */
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

int	is_digit(char	*str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	str[SIZE];
	int	len;

	printf("Enter a text: ");
	fgets(str, sizeof(str), stdin);
	len = stlen(str);
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
	int	res;

	res = is_digit(str);
	if (res == 1)
		printf("{%s} contains digits only\n", str);
	else
		printf("{%s} doesn't contain only digits\n", str);
	return (0);
}
