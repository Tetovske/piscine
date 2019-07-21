# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltesha <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 18:16:47 by ltesha            #+#    #+#              #
#    Updated: 2019/07/18 22:06:25 by ltesha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./src/

INC = ./includes/

FILES = $(SRC)main.c $(SRC)utils.c

OBJ = main.o utils.o

all:
	gcc -Werror -Wall -Wextra -c -I$(INC) $(FILES)
	gcc $(OBJ) -o ft_cat

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ft_cat

