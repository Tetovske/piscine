/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 20:30:21 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/19 21:31:57 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item,
				int (*cmpf)(void *, void *))
{
	t_btree *node;

	if (!root)
		return ;
	node = *root;
	if (!node)
	{
		node = btree_create_node(item);
		return ;
	}
	if ((*cmpf)(item, node->item) < 0)
	{
		if (node->left)
			btree_insert_data(&(node->left), item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(&(node->right), item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}
