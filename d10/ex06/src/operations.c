/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:51:24 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/16 18:58:17 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"
#include <stdio.h>

int		sum(int n1, int n2)
{
	return (n1 + n2);
}

int		sub(int n1, int n2)
{
	return (n1 - n2);
}

int		mul(int n1, int n2)
{
	return (n1 * n2);
}

int		dev(int n1, int n2)
{
	return (n1 / n2);
}

int		rem(int n1, int n2)
{
	return (n1 % n2);
}
