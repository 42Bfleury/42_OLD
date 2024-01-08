# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 14:31:18 by bfleury           #+#    #+#              #
#    Updated: 2016/11/21 14:40:31 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

O = ./ft_display_file.o

all: $(NAME)
	gcc -c -Werror -Wall -Wextra $(SRC)
	gcc -o $(NAME) $(O)

clean:
	rm -rf $(O)

fclean: clean
	rm $(NAME)
