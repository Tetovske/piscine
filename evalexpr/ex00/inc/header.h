/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:12:34 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/21 23:25:53 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		matoi(char *s);
void	ft_putnbr(int num);
int		eval_expr(char **s);
int		eval_expr_high_pr(char **s);
int		parse_num(char **s);

#endif
