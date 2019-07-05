/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:30:20 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/04 22:54:58 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	s = 'z';

	while (s >= 'a')
	{
		ft_putchar(s);
		s--;
	}
	ft_putchar('\n');
}
