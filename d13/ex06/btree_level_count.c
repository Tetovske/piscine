/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 22:31:36 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/19 23:03:29 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		btree_level_count(t_btree *root)
{
	int l;
	int r;
	int f;

	if (!root)
		return (0);
	l = btree_level_count(root->left);
	r = btree_level_count(root->right);
	if (r >= l)
		f = r;
	else
		f = l;
	return (f + 1);
}
