/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:02:42 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/04 23:00:19 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	digit2 = '0';

	while (digit2 <= '9')
	{
		char	digit1 = '0';

		while (digit1 <= '9')
		{
			char	digit0 = '0';

			while (digit0 <= '9')
			{
				if (digit0 > digit1 && digit1 > digit2)
				{
					ft_putchar(digit2);
					ft_putchar(digit1);
					ft_putchar(digit0);
					if(!(digit2 == '7' && digit0 == '9'))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
				digit0++;
			}
			digit1++;
		}	
		digit2++;
	}
	ft_putchar('\n');	
}
