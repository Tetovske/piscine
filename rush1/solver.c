/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:20:42 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/13 23:59:03 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ch_sudoku(int **s, int p, int n)
{
	int i;
	int j;

	i = -1;
	while (++i < 18)
	{
		if (s[p / 9][i] == n && i < 9)
			return (0);
		else if (i > 8)
		{
			if (s[i - 9][p % 9] == n)
				return (0);
		}
	}
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (s[(p / 9) - (p / 9 % 3) + i][(p % 9) - (p % 9 % 3) + j] == n)
				return (0);
		}
	}
	return (1);
}

int		solver(int **matrix, int id)
{
	int i;

	if (id > 80)
		return (1);
	if (matrix[id / 9][id % 9] != 0)
		return (solver(matrix, id + 1));
	i = 0;
	while (++i < 10)
	{
		if (ch_sudoku(matrix, id, i) == 1)
		{
			matrix[id / 9][id % 9] = i;
			if (solver(matrix, id + 1) == 1)
				return (1);
			else
				matrix[id / 9][id % 9] = 0;
		}
	}
	return (0);
}
