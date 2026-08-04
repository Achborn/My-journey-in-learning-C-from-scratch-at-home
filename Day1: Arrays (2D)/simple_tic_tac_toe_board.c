/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_tic_tac_toe_board.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnadifi <lnadifi@pooler.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:08:41 by lnadifi           #+#    #+#             */
/*   Updated: 2026/08/04 13:08:43 by lnadifi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ROW 3
#define COLUMN 3

void	print_board(int	r, int	c, char	board[r][c])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < r)
	{
		while (j < c)
		{
			printf("%c", board[i][j]);
			if (j < 2)
				printf("|");
			j++;
		}
		putchar('\n');
		j = 0;
		if (i < 2)
			printf("-----\n");
		i++;
	}
}

int	main(void)
{
	char	board[ROW][COLUMN] ={
				    {'X', 'O', ' '},
				    {'O', 'O', 'X'},
				    {'X', 'X', 'O'}};
	print_board(ROW, COLUMN, board);
}
