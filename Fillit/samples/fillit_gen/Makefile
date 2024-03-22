#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/12/28 19:24:20 by bfleury           #+#    #+#             *#
#*   Updated: 2015/12/29 05:17:43 by bfleury          ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME	= fillit_gen
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC		= srcs/ft_get_tetrimino.c \
		  srcs/ft_get_tetriminos.c \
		  srcs/ft_print_tetrimino.c\
		  srcs/ft_print_tetriminos.c \
		  srcs/main.c\
		  includes/libft.a

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all:	$(NAME)

clean:

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
