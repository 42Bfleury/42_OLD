# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 05:59:52 by bfleury           #+#    #+#              #
#*   Updated: 2016/06/09 01:49:08 by bfleury          ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME	= fillit
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

LIBDIR	= ../Libft

LIBNAME = ft

SRCDIR	= srcs

#SRCS	= $(SRCDIR)/main.c \
		  $(SRCDIR)/ft_solve.c \
		  $(SRCDIR)/ft_get_result.c \#
SRCS	= $(SRCDIR)/ft_get_tetrimino.c \
		  $(SRCDIR)/ft_get_tetriminos.c \
		  $(SRCDIR)/ft_check_buffer.c \
		  $(SRCDIR)/ft_check_tetrimino.c \
		  $(SRCDIR)/ft_string2bin.c \
		  $(SRCDIR)/ft_puterror.c

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -L $(LIBDIR) -l$(LIBNAME) -o $(NAME)

all:	$(NAME)

clean:

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
