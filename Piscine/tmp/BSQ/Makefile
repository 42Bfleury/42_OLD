# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qsalerne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/24 03:02:20 by qsalerne          #+#    #+#              #
#    Updated: 2015/09/24 23:00:04 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = Source/main.c Source/ft_resolve_file.c Source/ft_function1.c \
	  Source/ft_function2.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o2 -o $(NAME) $(SRC)

clean:
	rm -f tmp.bsq

fclean: clean
	rm -f $(NAME)

re: fclean all
