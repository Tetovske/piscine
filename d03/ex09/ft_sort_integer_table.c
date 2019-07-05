/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 23:35:30 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/05 23:39:28 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
		    
	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		int min;
		int id;
  		
		id = i;
		min = tab[i];
		while (j < size - 1)
		{
			if (tab[j] < min)
								int p;
																																				                
																																				                p = tab[j];
																																								                tab[j] = tab[id];
																																												                tab[id] = p;
																																																            }
																											            j++;
																														        }
																				        i++;
																						    }
}
