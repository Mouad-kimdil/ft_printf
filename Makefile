# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 14:42:54 by mkimdil           #+#    #+#              #
#    Updated: 2023/11/17 14:42:56 by mkimdil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_nlen.c ft_print_addr.c ft_print_lowhex.c ft_print_unsigned.c \
	ft_print_upphex.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_strlen.c ft_hexlen.c

HEADER = ft_printf.h
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
