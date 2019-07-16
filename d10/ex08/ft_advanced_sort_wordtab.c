/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:16:57 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/16 21:32:08 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		l;
	char	*s;

	l = -1;
	while (tab[++l])
		;
	i = 0;
	while (++i < l)
	{
		j = -1;
		while (++j < l - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				s = tab[i];
				tab[i] = tab[j];
				tab[j] = s;
			}
		}
	}
}
