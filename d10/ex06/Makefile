# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/23 16:03:01 by flcarre           #+#    #+#              #
#    Updated: 2018/08/23 16:03:05 by flcarre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

SRCS	=	./SRCS/*.c
OBJ = *.o
HEADERS = ./include/

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -rf

all: objs
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -I $(HEADERS)

objs:
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADERS)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
