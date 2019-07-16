/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:53:59 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/16 23:56:24 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list* ft_create_elem(void* data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		while ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
		(*begin_list)->next = (t_list *)malloc(sizeof(t_list));
		(*begin_list)->next->next = NULL;
		(*begin_list)->next->data = data;
	}
}
t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = 0;
	ft_list_push_back(&list, "asdf");
	/*
	crap_a_list(list);
	ft_list_push_back(&list, "qwer");
	ft_list_push_back(&list, "zxcv");
	crap_a_list(list);
	list = 0;
	ft_list_push_back(&list, "uiop");
	ft_list_push_back(&list, "hjkl");
	crap_a_list(list);
	*/
}
