/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:38:33 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/11 23:09:13 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
{
	int		i;
	int		size;

	size = 0;
	i = -1;
	while (str[++i] != '\0')
		size++;
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;
	int		size;
	char	*s;

	i = 0;
	size = 0;
	while (++i < argc)
		size += str_len(*(m + i));
	s = (char *)malloc(sizeof(char) * (size + argc + 1));
	i = 0;
	c = 0;
	while (++i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j) != '\0')
		{
			s[c++] = *(*(argv + i) + j);
			j++;
		}
		s[c++] = '\n';
	}
	s[c] = '\0';
	return (s);
}
