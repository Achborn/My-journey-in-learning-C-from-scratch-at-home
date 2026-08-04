/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:08:58 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:09:00 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	stlen(char	*str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*stcpy(char	*src, char	*dst)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(void)
{
	char	str1[10] = "Lahcen";
	char	str2[10] = "";

	stcpy(str1, str2);

	printf("%s\n", str2);
	printf("%d\n", stlen(str2));
	return (0);
}
