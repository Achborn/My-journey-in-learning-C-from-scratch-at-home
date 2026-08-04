/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:08:50 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:08:52 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	stlen(char	*st)
{
	int	i;

	i = 0;
	while (st[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	int	size;

	printf("Enter size of the string: ");
	scanf("%d", &size);
	while ((getchar()) != '\n');

	char	str[size];

	printf("Enter any text: ");
	fgets(str, sizeof(str), stdin);

	int	len;

	len = stlen(str);
	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\n';

	printf("Length of the text: %d", stlen(str));
	return (0);
}
