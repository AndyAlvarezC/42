# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 23:59:34 by andalvar          #+#    #+#              #
#    Updated: 2023/10/23 23:59:34 by andalvar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC = ft_bzero.c ft_calloc.c ft_hexa.c ft_itoa_base.c ft_len.c ft_printf.c ft_ptr.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_strlen.c
OBJ = $(SRC:.c=.o)
INCLUDE = libftprintf.h Makefile


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all