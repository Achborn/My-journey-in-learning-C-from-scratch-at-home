/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remember_last_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:13 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 15:09:15 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	remember(int	n)
{
	static	int	i;

	if (n != -1)
	{
		i = n;
		return (i);
	}
	return (i);
}

int	main(void)
{
	printf("%d\n", remember(10));

	printf("%d\n", remember(-1));
	return (0);
}
