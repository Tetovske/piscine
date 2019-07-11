/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:33:56 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/10 18:37:42 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	*range = NULL;
	if (min < max)
	{
		*range = (int *)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			(*range)[i] = min++;
			i++;
		}
		return (max - min);
	}
	return (0);
}
