/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:19:36 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/17 20:32:54 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *node;

	node = begin_list;
	while (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			return (node);
		node = node->next;
	}
	return (0);
}
