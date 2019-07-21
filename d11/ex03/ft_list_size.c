/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:28:47 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/17 15:43:05 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*node;

	if (begin_list)
	{
		i = 1;
		while (begin_list->next)
		{
			i++;
			begin_list = begin_list->next;
		}
		return (i);
	}
	else
		return (0);
}
