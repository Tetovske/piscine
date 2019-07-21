/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 20:23:01 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/19 20:26:56 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_suffix(root->left);
		btree_apply_suffix(root->right);
		(*applyf)(root->item);
	}
}
