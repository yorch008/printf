# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 22:08:46 by johernan          #+#    #+#              #
#    Updated: 2023/10/11 22:08:49 by johernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_printf.c \
		ft_print_char.c\
		ft_print_string.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: fclean all

