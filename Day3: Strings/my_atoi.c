/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:15:29 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:15:32 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_atoi(char	*nptr)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n')
		nptr++;

	if (*nptr == '-')
	{
		sign = -1;
	}
	while (*nptr == '-' || *nptr == '+')
		nptr++;

	while (*nptr >= '0' && *nptr <= '9')
	{
		number = number * 10 + (*nptr - '0');
		nptr++;
	}
	return (number * sign);
}

int	main(void)
{
	char	str[] = "+-12345";
	int	number;

	number = my_atoi(str);
	printf("%d\n", number);
}
