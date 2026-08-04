/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:15:17 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:15:18 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define	SIZE 200

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

const char	*my_strstr(const char	*str, const char	*neddle)
{
	const char	*current;
	const char	*st_cmp;
	const char	*ned;

	current = str;
	while (*current)
	{
		st_cmp = current;
		ned = neddle;
		if (*current == *ned)
		{
			if (*ned != '\0')
			{	
				while (*st_cmp == *ned)
				{
					ned++;
					st_cmp++;
				}
			}
			return (current);
		}
		current++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[SIZE];
	char	str1[SIZE];
	int	len;

	printf("Enter something: ");
	fgets(str, sizeof(str), stdin);
	if (str[0] == '\n')
	{
		printf("Try again\n");
		return (0);
	}
	len = stlen(str);
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
	printf("Enter something to look for in the string: ");
	fgets(str1, sizeof(str1), stdin);
	len = stlen(str1);
	if (len > 0 && str1[len - 1] == '\n')
		str1[len - 1] = '\0';

	const char	*res;

	res = my_strstr(str, str1);
	if (res == NULL)
		printf("The text you're looking for is not in the string\n");
	printf("%s\n", res);
	return (0);
}
