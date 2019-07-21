/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 21:46:28 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/19 22:23:24 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	t_btree		*item;

	if (!root)
		return (0);
	if (root->left)
	{
		item = btree_search_item(root->left, data_ref, cmpf);
		if (item)
			return (item);
	}
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root->item);
	if (root->right)
	{
		item = btree_search_item(root->right, data_ref, cmpf);
		if (item)
			return (item);
	}
	return (0);
}
