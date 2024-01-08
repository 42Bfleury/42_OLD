# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 05:59:52 by bfleury           #+#    #+#              #
#    Updated: 2016/11/23 12:24:10 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
TYPEFILE		= library

RED				= \033[31m
YELLOW			= \033[33m
GREEN			= \033[1;32m
END				= \033[0m

SUCCESS			= "$(GREEN)[SUCCESS!]$(END)"
OBJECTS			= "$(YELLOW)Generating $(NAME) objects...     $(END)\c"
PROJECT			= "$(YELLOW)Generating $(NAME) $(TYPEFILE)...     $(END)\c"
RMOBJECTS		= "$(RED)Removing $(NAME) objects...       $(END)\c"
RMPROJECT		= "$(RED)Removing $(NAME) $(TYPEFILE)...       $(END)\c"

SRC_DIR			= srcs
OBJ_DIR			= objs
SRC				= $(shell find $(SRC_DIR) -name "*.c" -type f)
OBJ				= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC				= clang
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -rf

all:			build $(NAME)

build :
				@mkdir -p $(OBJ_DIR)

$(NAME):		$(OBJ)
				@echo $(PROJECT)
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo $(SUCCESS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
				@echo $(OBJECTS)
				@$(CC) $(CFLAGS) -o $@ -c $<
				@echo $(SUCCESS)

clean:
				@echo $(RMOBJECTS)
				@$(RM) $(OBJ_DIR)
				@echo $(SUCCESS)

xclean:
				@echo $(RMPROJECT)
				@$(RM) $(NAME)
				@echo $(SUCCESS)

fclean:			clean xclean

re:				fclean all

.PHONY:			all build clean xclean fclean re
