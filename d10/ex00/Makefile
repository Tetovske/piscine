# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltesha <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 16:04:59 by ltesha            #+#    #+#              #
#    Updated: 2019/07/16 21:36:51 by ltesha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ./src

SOURCES = $(SOURCE)/ft_putchar.c $(SOURCE)/ft_putstr.c $(SOURCE)/ft_strcmp.c \
		  		$(SOURCE)/ft_strlen.c $(SOURCE)/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -c -Wall -Wextra -Werror $(SOURCES) -I ./includes/
	ar rc libft.a $(OBJ)
	ranlib libft.a
	rm $(OBJ)

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f libft.a

re: fclean all
