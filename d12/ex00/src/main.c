/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:04:56 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/18 18:23:10 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		ch_args(int argc)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	else
		return (1);
}

int		main(int argc, char **argv)
{
	if (ch_args(argc) == 0)
		return (0);
	f_display(argv[1]);
	return (0);
}
