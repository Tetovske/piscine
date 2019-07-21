/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_manager.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:08:11 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/18 18:22:09 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs.h"
#define BUFFER 4096

int		f_display(char *str)
{
	int		fd;
	char	buf[BUFFER + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buf, BUFFER))
	{
		buf[BUFFER] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (0);
	else
		return (1);
}
