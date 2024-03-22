# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 01:07:07 by bfleury           #+#    #+#              #
#    Updated: 2016/11/12 20:31:26 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC			= %%%%
INCLIB		= $(INC)/../lib

NAME		= mlx-test
TYPEFILE	= executable

RED			= \033[31m
YELLOW		= \033[33m
GREEN		= \033[1;32m
ENDCOLOR	= \033[0m

SUCCESS		= "$(GREEN)    [SUCCESS!]$(ENDCOLOR)"
OBJECTS		= "$(YELLOW)Generating $(NAME) objects...   $(ENDCOLOR)\c"
PROJECT		= "$(YELLOW)Generating $(NAME) $(TYPEFILE)...$(ENDCOLOR)\c"
RMOBJECTS	= "$(RED)Removing $(NAME) objects...     $(ENDCOLOR)\c"
RMPROJECT	= "$(RED)Removing $(NAME) $(TYPEFILE)...  $(ENDCOLOR)\c"

CC			= gcc
CFLAGS		= -I$(INC) -O3 -I..
RM			= rm -rf

SRC			= main.c
OBJ			= $(SRC:.c=.o)

all:		objects $(NAME)

$(NAME):
			@echo $(PROJECT)
			@$(CC) -o $(NAME) $(OBJ) -L.. -lmlx -L$(INCLIB) -lXext -lX11 -lm -lbsd
			@echo $(SUCCESS)

objects:	$(OBJ)

%.o:		%.c
			@echo $(OBJECTS)
			@$(CC) $(CFLAGS) -o $@ -c $<
			@echo $(SUCCESS)

clean:
			@echo $(RMOBJECTS)
			@$(RM) $(OBJ)
			@echo $(SUCCESS)

xclean:
			@echo $(RMPROJECT)
			@$(RM) $(NAME)
			@echo $(SUCCESS)

fclean:		clean xclean

re:			fclean all
