/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:49:31 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/11 23:24:01 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (*(tab + i) != NULL)
	{
		j = 0;
		while (*(*(tab + i) + j) != '\0')
		{
			ft_putchar(*(*(tab + i) + j));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
