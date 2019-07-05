/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:44:23 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/04 23:07:48 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n);
void	ft_putchar(char s);
void	increase(char *a, size_t size);

void	increase(char *a, size_t size)
{
	int i = 0;
	int check = 1;
	static int p = 0;

	while (i < size)
	{
		if (a[i] != '9') check = 0;
		i++;	
	}
	if (check == 0)
	{
		int i = size;

		while (i-- >= 0)
		{
			if (a[i] < '9')
			{
				a[i]++;
				break;
			}
			else if (a[i] == '9')
			{
				a[i] = '0';
				continue;
			}
		}
		i = size;
		check = 1;
		while (i-- > 0)
		{
			if (a[i] <= a[i - 1])
			{
				check = 0;
				break;
			}
		}
		if (check == 1)
		{
			if (p != 0)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
			i = 0;
			while (i < size)
			{
				ft_putchar(a[i]);
				i++;
			}
			p++;
		}	
		increase(a, size);
	}	
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_combn(int n)
{
	int nums[n];
	int i = 0;

	while (i < n)
	{
		nums[i] = '0';
		i++;
	}
	increase(nums, n);
}
