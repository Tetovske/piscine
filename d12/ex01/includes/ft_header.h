/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltesha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:42:44 by ltesha            #+#    #+#             */
/*   Updated: 2019/07/18 22:16:17 by ltesha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define BUFFER 32
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

char	*g_prog_name;
void	print_err(int err, char *com);
void	prog_name(char *p_name);
void	ft_putchar(char s);
void	ft_putstr(const char *const str);

#endif
