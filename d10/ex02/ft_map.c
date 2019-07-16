/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:22:57 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/15 19:38:42 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *num;
	int i;

	num = (int *)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		num[i] = f(tab[i]);
	return (num);
}
