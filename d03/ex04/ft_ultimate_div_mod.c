/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:20:12 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/05 22:28:18 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int local_a;
	int local_b;

	local_a = *a;
	local_b = *b;
	*a = local_a / local_b;
	*b = local_a % local_b;
}
