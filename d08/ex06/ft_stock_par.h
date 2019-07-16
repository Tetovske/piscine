/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 23:21:55 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/12 23:24:34 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

char 	**ft_split_whitespaces(char	*str);

typedef struct	s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}				t_stock_par;

#endif
