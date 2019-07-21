/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:02:29 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/17 17:12:37 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_add_elem(t_list **list, void *data)
{
	t_list *node;
	t_list *head;

	if (!(*list))
		*list = ft_create_elem(data);
	else
	{
		head = *list;
		while (head->next)
			head = head->next;
		node = ft_create_elem(data);
		node->next = 0;
		head->next = node;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;

	list = 0;
	while (--ac >= 0)
		ft_add_elem(&list, av[ac]);
	return (list);
}
