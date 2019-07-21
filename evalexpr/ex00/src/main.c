/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 18:57:35 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/21 23:37:38 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		parse_num(char **s)
{
	int i;
	int res;

	while (**s == ' ')
		(*s)++;
	if (**s == '(')
	{
		(*s)++;
		res = eval_expr(s);
		if (**s == ')')
			(*s)++;
		return (res);
	}
	return (atoi(*s));
}

int		eval_expr_high_pr(char **s)
{
	int		n1;
	int		n2;
	char	p;

	n1 = parse_num(s);
	while (**s)
	{
		(*s)++;
		while (**s == ' ')
			(*s)++;
		p = **s;
		if (p != '*' && p != '/' && p != '%')
			return (n1);
		(*s)++;
		n2 = parse_num(s);
		if (p == '/')
			n1 /= n2;
		else if (p == '*')
			n1 *= n2;
		else
			n1 %= n2;
	}
	return (n1);
}

int		eval_expr(char **s)
{
	int		n1;
	int		n2;
	char	p;

	n1 = eval_expr_high_pr(s);
	while (**s)
	{
		(*s)++;
		while (**s == ' ')
			(*s)++;
		printf("op: %c\n", **s);
		p = **s;
		if (p != '+' && p != '-')
			return (n1);
		(*s)++;
		n2 = eval_expr_high_pr(s);
		if (p == '+')
			n1 += n2;
		else
			n1 -= n2;
	}
	return (n1);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(&av[1]));
		ft_putchar('\n');
	}
	return (0);
}
