/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:32:07 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/16 18:59:09 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	print_num(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		ft_putchar(num + '0');
		ft_putchar('\n');
	}
	else
	{
		print_num(num / 10);
		ft_putchar(num % 10 + '0');
	}
}

void	print(char *s)
{
	int i;

	i = -1;
	while (s[++i])
		;
	write(1, s, i);
}

int		atoi(char *s)
{
	int l;
	int num;
	int d;
	int f;

	f = 0;
	num = 0;
	d = 1;
	l = -1;
	if (*s == '-')
	{
		l = 0;
		f = 1;
	}
	while (s[++l] != '\0' && s[l] >= '0' && s[l] <= '9')
		;
	while (l-- != f)
	{
		num += (s[l] - '0') * d;
		d = d * 10;
	}
	if (f == 1)
		return (-num);
	else
		return (num);
}
