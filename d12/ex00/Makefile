# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltesha <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 15:11:10 by ltesha            #+#    #+#              #
#    Updated: 2019/07/18 22:52:56 by ltesha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./src/

INC = ./includes/

FILES = $(SRC)main.c $(SRC)f_manager.c

HEADS = $(INC)libs.h

EXECUTABLE = ft_display_file

OBJ = main.o f_manager.o

all:
	gcc -Wall -Wextra -Werror -I$(INC) -c $(FILES)
	gcc $(OBJ) -o $(EXECUTABLE)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(EXECUTABLE)
