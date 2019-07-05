/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:52:41 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/04 22:58:12 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void    ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		num1 = 0;

	while (num1 < 100)
	{
		int		num2 = 0;

		while (num2 < 100)
		{
			if (num2 > num1)
			{
				ft_putchar(num1 / 10 + '0');
				ft_putchar(num1 % 10 + '0');
				ft_putchar(' ');
				ft_putchar(num2 / 10 + '0');
				ft_putchar(num2 % 10 + '0');
				if (!(num2 == 99 && num1 == 98))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}	
			}	
			num2++;
		}
		num1++;
	}
	ft_putchar('\n');
}
