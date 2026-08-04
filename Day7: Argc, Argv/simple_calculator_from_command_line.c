/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_calculator_from_command_line.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:17:36 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:17:37 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_atoi(char	*nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
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

int	stcmp(char	*s1, char	*s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}

int	main(int	argc, char	*argv[])
{
	if (argc != 4)
	{
		printf("Usage: ./calc operation number1 number2\n");
		return (1);
	}

	int	n1;
	int	n2;
	int	res;

	res = 0;
	n1 = my_atoi(argv[2]);
	n2 = my_atoi(argv[3]);

	if (stcmp(argv[1], "add") == 0)
	{
		res = n1 + n2;
		printf("%d + %d = %d", n1, n2, res);
	}
	else if (stcmp(argv[1], "sub") == 0)
	{
		res = n1 - n2;
		printf("%d - %d = %d", n1, n2, res);
	}
	else if (stcmp(argv[1], "mul") == 0)
	{
		res = n1 * n2;
		printf("%d * %d = %d", n1, n2, res);
	}
	else if (stcmp(argv[1], "div") == 0)
	{
		if (n2 == 0)
			printf("Can't divide by zero\n");
		else
		{
			res = n1 / n2;
			printf("%d / %d = %d", n1, n2, res);
		}
	}
	else if (stcmp(argv[1], "mod") == 0)
	{
		res = n1 % n2;
		printf("%d %% %d = %d", n1, n2, res);
	}
	else
		printf("Invalid operator\n");
	return (0);
}
