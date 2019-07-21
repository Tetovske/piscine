/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 22:54:18 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/19 23:35:36 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_lvl_c;

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

void	apply(t_btree *root, int curlvl, int is_ch,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (g_lvl_c == curlvl)
		(*applyf)(root->item, curlvl, is_first_elem);
	else
	{
		apply(root->left, curlvl + 1, 0, applyf);
		apply(root->right, curlvl + 1, 0, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int lvl;

	if (!root)
		return ;
	g_lvl_c = btree_level_count(root);
	lvl = -1;
	while (++lvl < g_lvl_c)
		apply(root, 0, 1, applyf);
	return ;
}
