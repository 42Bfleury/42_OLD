# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 14:31:18 by bfleury           #+#    #+#              #
#    Updated: 2016/11/21 14:39:50 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c -Werror -Wextra -Wall $(SRC) -I includes/
	ar rc $(NAME) $(O)
	ranlib $(NAME)

clean:
	/bin/rm -f $(O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
