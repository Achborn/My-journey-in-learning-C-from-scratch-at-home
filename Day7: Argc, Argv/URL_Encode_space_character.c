/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   URL_Encode_space_character.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 23:16:28 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 23:21:45 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 100

void	url_encode(char	*current, char	*edited)
{
	char	*encode = "%20";
	char	*start;

	start = encode;
	while (*current)
	{
		if (*current == ' ')
		{
			while (*encode)
			{
				*edited = *encode;
				edited++;
				encode++;
			}
			encode = start;
		}
		if (*current == ' ')
			current++;
		*edited = *current;
		edited++;
		current++;
	}
	*edited = '\0';
}

int	main(int	argc, char	*argv[])
{

	if (argc < 2)
		printf("Please enter something\n");

	char	original_string[SIZE];
	char	*word;
	char	edited[SIZE];
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		word = argv[j];
		while (*word)
		{
			original_string[i] = *word;
			i++;
			word++;
		}
		original_string[i] = ' ';
		i++;
		j++;
	}
	original_string[i - 1] = '\0';
	url_encode(original_string, edited);
	printf("Encoded: [%s]\n", edited);
	return (0);
}
