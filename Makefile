# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 15:49:17 by brumarti          #+#    #+#              #
#    Updated: 2023/01/05 17:18:56 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFTPATH = ./libft/

LIBFTNAME = libft.a

SRC = main.c init.c 

OPER = oper/oper.c oper/oper2.c oper/oper3.c

ALGO = sort/quick_sort.c

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
