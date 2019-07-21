# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltesha <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 19:09:51 by ltesha            #+#    #+#              #
#    Updated: 2019/07/21 18:48:38 by ltesha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./src/
INC = ./inc/

FILES = $(SRC)main.c $(SRC)utils.c $(SRC)atoi.c
INCLUDES = $(INC)header.h

OBJ = main.o utils.o atoi.o

EXECUTABLE = eval_expr

all:
	gcc $(FILES) -c -I $(INC)
	gcc $(OBJ) -o $(EXECUTABLE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

