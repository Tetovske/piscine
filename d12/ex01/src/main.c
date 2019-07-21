/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:49:14 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/18 22:21:16 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	f_display(char *file_n)
{
	int		res;
	int		fd;
	char	buf[BUFFER + 1];

	buf[BUFFER] = '\0';
	fd = open(file_n, O_RDONLY);
	if (fd == -1)
		print_err(errno, file_n);
	else
	{
		while ((res = read(fd, buf, BUFFER)))
		{
			if (res == -1)
			{
				print_err(errno, file_n);
				return ;
			}
			buf[res] = '\0';
			ft_putstr(buf);
		}
		res = close(fd);
		if (fd == -1)
			print_err(errno, file_n);
	}
}

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putstr(const char *const str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	print_err(int err, char *com)
{
	extern char					*g_prog_name;
	extern const char * const	sys_errlist[];
	extern const int			sys_nerr;

	if (err < 1 || err > sys_nerr - 1)
		return ;
	ft_putstr(g_prog_name);
	ft_putstr(": ");
	ft_putstr(com);
	ft_putstr(": ");
	ft_putstr(sys_errlist[err]);
	ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	int i;

	prog_name(argv[0]);
	i = 0;
	while (++i < argc)
		f_display(argv[i]);
	return (0);
}
