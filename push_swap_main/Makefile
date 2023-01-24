# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 15:49:17 by brumarti          #+#    #+#              #
#    Updated: 2023/01/24 15:30:16 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

LIBFTPATH = ./libft/

LIBFTNAME = libft.a

#Main
NAME = push_swap

SRC = main.c \
		srcs/init.c \
		srcs/utils/find_min.c \
		srcs/utils/find_max.c \
		srcs/utils/decimal_to_bit.c \
		srcs/utils/get_digits.c \
		srcs/utils/get_max_bits.c \
		srcs/oper/oper.c \
		srcs/oper/oper2.c \
		srcs/oper/oper3.c \
		srcs/sort/sort_small_stack.c \
		srcs/sort/sort_big_stack.c \
		srcs/sort/special_case.c

OBJ = $(SRC:.c=.o)

#Bonus
BONUS_NAME = checker

BONUS_SRC = bonus/main.c \
				bonus/srcs/init.c \
				bonus/srcs/sort/check_sorted.c \
				bonus/srcs/oper/oper.c \
				bonus/srcs/oper/oper2.c \
				bonus/srcs/oper/oper3.c \

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFTPATH)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFTPATH)$(LIBFTNAME) -o $(NAME)

clean :
	rm -rf $(OBJ) $(BONUS_OBJ)
	cd libft && $(MAKE) clean

fclean: clean 
	rm -f $(LIBFTPATH)$(LIBFTNAME) $(NAME) $(BONUS_NAME)

re: fclean all

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJ)
	make -C $(LIBFTPATH)
	$(CC) $(CFLAGS) $(BONUS_OBJ) $(LIBFTPATH)$(LIBFTNAME) -o $(BONUS_NAME)

.SILENT: