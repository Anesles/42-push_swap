# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 15:49:17 by brumarti          #+#    #+#              #
#    Updated: 2023/01/11 15:42:05 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFTPATH = ./libft/

LIBFTNAME = libft.a

SRC = main.c srcs/init.c

OPER = srcs/oper/oper.c srcs/oper/oper2.c srcs/oper/oper3.c

ALGO = srcs/sort/sort_small_stack.c srcs/sort/sort_big_stack.c

OBJ = $(SRC:.c=.o) $(OPER:.c=.o) $(ALGO:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFTPATH)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPATH)$(LIBFTNAME) -o $(NAME)

clean :
	rm -rf $(OBJ)
	cd libft && $(MAKE) clean

fclean: clean 
	rm -f $(LIBFTPATH)$(LIBFTNAME) $(NAME)

re: fclean all
