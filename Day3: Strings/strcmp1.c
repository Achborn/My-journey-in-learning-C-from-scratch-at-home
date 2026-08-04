/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:10:15 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:10:19 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	stlen(char	*st)
{
	int	i;

	i = 0;
	while (*st)
	{
		i++;
		st++;
	}
	return (i);
}

int	my_strcmp(char	*st1, char	*st2)
{
	while (*st1 && *st2)
	{
		if (*st1 > *st2)
			return (1);
		else if (*st1 < *st2)
			return (-1);
		st1++;
		st2++;
	}
	return (0);
}

int	main(void)
{
	int	size;

	printf("Enter size of the string: ");
	scanf("%d", &size);
	while ((getchar()) != '\n');

	char	str1[size];
	char	str2[size];
	int	res;
	int	len;

	printf("Enter any text: ");
	fgets(str1, sizeof(str1), stdin);
	len = stlen(str1);
	if (len > 0 && str1[len - 1] == '\n')
		str1[len - 1] = '\0';
	printf("Enter another text: ");
	fgets(str2, sizeof(str2), stdin);
	len = stlen(str2);
	if (len > 0 && str2[len - 1] == '\n')
		str2[len - 1] = '\0';

	res = my_strcmp(str1, str2);
	if (res == 0)
		printf("%s equals %s\n", str1, str2);
	else if (res == 1)
		printf("%s is Larger than %s\n", str1, str2);
	else
		printf("%s is Smaller than %s\n", str1, str2);
	return (0);
}
