/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:41:02 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/12 17:01:24 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);
int		w_count(char *s);
char	**w_allocate(char *str);
int		s_ch(char s);
char	**ch_iter(char **w, char *a);

int		w_count(char *s)
{
	int i;
	int c;
	int prev;

	i = 0;
	c = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (0);
	prev = 1;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && prev == 1)
		{
			c++;
			prev = 0;
		}
		else if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			prev = 1;
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t' && s[i + 1] == '\0')
			c++;
		i++;
	}
	return (c);
}

int		s_ch(char s)
{
	if (s == '\n' || s == '\t' || s == ' ')
		return (0);
	else
		return (1);
}

char	**ch_iter(char **w, char *a)
{
	int i;
	int c;
	int s;

	i = -1;
	s = 0;
	c = 0;
	while (a[++i] != '\0')
	{
		if (s_ch(a[i]) == 0 && i > 0 && s_ch(a[i - 1]) == 1)
		{
			*(w + c) = (char *)malloc(sizeof(char) * (s + 1));
			*(*(w + (c++)) + s) = '\0';
			s = 0;
		}
		else if (s_ch(a[i]) == 1 && a[i + 1] != '\0')
			s++;
		else if (s_ch(a[i]) == 1 && a[i + 1] == '\0')
		{
			*(w + c) = (char *)malloc(sizeof(char) * (s + 1));
			*(*(w + (c++)) + (++s)) = '\0';
		}
	}
	*(w + c) = 0;
	return (w);
}

char	**w_allocate(char *str)
{
	char	**words;

	words = (char **)malloc(sizeof(char *) * (w_count(str) + 1));
	words = ch_iter(words, str);
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**ret;
	int		c;
	int		s;

	ret = w_allocate(str);
	i = -1;
	c = 0;
	s = 0;
	while (str[++i] != '\0')
	{
		if (s_ch(str[i]) == 0 && i > 0 && s_ch(str[i - 1]) == 1)
		{
			s = 0;
			c++;
		}
		else if (s_ch(str[i]) == 1)
			*(*(ret + c) + s++) = str[i];
	}
	return (ret);
}
