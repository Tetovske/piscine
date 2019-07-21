/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:23:06 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/14 00:04:21 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ch_sudoku(int **s, int p, int n);
int		solver(int **matrix, int id);
void	ft_putchar(char s);

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

int		ch_args(int argc, char **a)
{
	int		i;
	int		c;
	int		n_count;

	if (argc != 10)
		return (0);
	n_count = 0;
	i = 0;
	while (++i < argc)
	{
		c = -1;
		while (a[i][++c] != '\0')
		{
			if (a[i][c] > '0' && a[i][c] <= '9')
				n_count++;
			if (!((a[i][c] > '0' && a[i][c] <= '9') || a[i][c] == '.'))
				return (0);
		}
	}
	if (n_count > 16)
		return (1);
	else
		return (0);
}

int		**conv_args(char **argv)
{
	int i;
	int j;
	int **matrix;

	matrix = (int **)malloc(sizeof(int *) * 9);
	i = -1;
	while (++i < 10)
		matrix[i] = (int *)malloc(sizeof(int) * 9);
	i = 0;
	while (++i < 10)
	{
		j = -1;
		while (++j < 9)
		{
			if (argv[i][j] == '.')
				matrix[i - 1][j] = 0;
			else
				matrix[i - 1][j] = argv[i][j] - '0';
		}
	}
	return (matrix);
}

int		main(int argc, char **argv)
{
	int		**sudoku;
	int		i;
	char	*er;

	i = -1;
	if (ch_args(argc, argv) == 1)
	{
		sudoku = conv_args(argv);
		solver(sudoku, 0);
		while (++i < 81)
		{
			ft_putchar(sudoku[i / 9][i % 9] + '0');
			if ((i + 1) % 9 == 0)
				ft_putchar('\n');
			else
				ft_putchar(' ');
		}
	}
	else
	{
		er = "ERROR\n";
		while (er[++i] != '\0')
			ft_putchar(er[i]);
	}
	return (0);
}
