/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:37:04 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/12 23:18:20 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*str_copy(char *s)
{
	int		i;
	int		l;
	char	*ret;

	i = -1;
	l = -1;
	while (s[++l] != '\0')
		;
	ret = (char *)malloc(sizeof(char) * (l + 1));
	ret[l] = '\0';
	i = -1;
	while (++i < l)
		ret[i] = s[i];
	return (ret);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	int				l_size;
	t_stock_par		*a;

	a = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		l_size = -1;
		while (av[i][++l_size] != '\0')
			;
		a[i].size_param = l_size;
		a[i].str = av[i];
		a[i].copy = str_copy(av[i]);
		a[i].tab = ft_split_whitespaces(av[i]);
	}
}
