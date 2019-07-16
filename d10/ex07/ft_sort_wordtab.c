/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:07:34 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/16 21:07:21 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_cmp(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] < s2[i])
			return (1);
		else if (s1[i] > s2[i])
			return (-1);
	}
	return (0);
}

void	swap(char **tab, int i, int j)
{
	char *s;

	s = tab[i];
	tab[i] = tab[j];
	tab[j] = s;
}

void	ft_sort_wordtab(char **tab)
{
	int len;
	int j;
	int i;

	len = -1;
	i = 0;
	j = -1;
	while (tab[++len])
		;
	while (++i < len)
	{
		j = -1;
		while (++j < len - i)
		{
			if (str_cmp(tab[j], tab[j + 1]) == -1)
				swap(tab, j, j + 1);
		}
	}
}
