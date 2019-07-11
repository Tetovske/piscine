/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:25:17 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/11 16:19:12 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ret_str;

	i = -1;
	len = 0;
	while (++i != '\n')
		len++;
	ret_str = malloc((i + 1) * sizeof(*ret_str));
	i = -1;
	while (++i < len + 1)
		ret_str[i] = str[i];
	return (ret_str);
}
