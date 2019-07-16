/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:17:19 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/16 19:00:41 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int		print(char *s);
int		atoi(char *s);
void	print_num(int num);
int		calc(int n1, int n2, int (*op)(int, int));

int		ch_args(int argc, char **argv)
{
	char c;

	if (argc != 4)
		return (0);
	if (argv[2][1] != '\0')
		return (0);
	c = argv[2][0];
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int (*op[5])(int, int);

	op[0] = sum;
	op[1] = sub;
	op[2] = mul;
	op[3] = dev;
	op[4] = rem;
	if (!ch_args(argc, argv))
		return (0);
	else if (argv[2][0] == '/' && argv[3][0] == '0')
		print("Stop : division by zero\n");
	else if (argv[2][0] == '%' && argv[3][0] == '0')
		print("Stop : modulo by zero\n");
	else if (argv[2][0] == '+')
		print_num(calc(atoi(argv[1]), atoi(argv[3]), op[0]));
	else if (argv[2][0] == '-')
		print_num(calc(atoi(argv[1]), atoi(argv[3]), op[1]));
	else if (argv[2][0] == '*')
		print_num(calc(atoi(argv[1]), atoi(argv[3]), op[2]));
	else if (argv[2][0] == '/')
		print_num(calc(atoi(argv[1]), atoi(argv[3]), op[3]));
	else if (argv[2][0] == '%')
		print_num(calc(atoi(argv[1]), atoi(argv[3]), op[4]));
	return (0);
}
