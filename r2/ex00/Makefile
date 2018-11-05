# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 13:51:39 by flcarre           #+#    #+#              #
#    Updated: 2018/08/19 20:08:17 by flcarre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-2

SRCS	=	./SRCS/*.c
OBJS = *.o
HEADERS = ./include/

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -rf

all	: $(NAME)

$(NAME) :
		$(CC) -o $(NAME) $(SRCS) -I $(HEADERS)

fclean :
		$(RM) $(NAME)

re	:	fclean all
