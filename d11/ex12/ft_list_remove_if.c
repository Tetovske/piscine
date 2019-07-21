/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:36:57 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/17 23:39:11 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	help(t_list **next, t_list **prev, t_list **cur, t_list **b)
{
	if (*prev)
	{
		(*prev)->next = *next;
		*cur = *next;
	}
	else
	{
		*cur = *next;
		*b = *cur;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev;
	t_list *cur;
	t_list *next;

	prev = NULL;
	cur = *begin_list;
	while (cur)
	{
		if ((*cmp)(cur->data, data_ref) == 0)
		{
			next = cur->next;
			free(cur);
			help(&next, &prev, &cur, begin_list);
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
}
