# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 03:44:46 by bfleury           #+#    #+#              #
#    Updated: 2016/11/11 11:40:24 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libmlx.a
TYPEFILE		= library

RED				= \033[31m
YELLOW			= \033[33m
GREEN			= \033[1;32m
ENDCOLOR		= \033[0m

SUCCESS			= "            $(GREEN)[SUCCESS!]$(ENDCOLOR)"
OBJECTS			= "$(YELLOW)Generating $(NAME) object... $(ENDCOLOR)\c"
PROJECT			= "$(YELLOW)Generating $(NAME) $(TYPEFILE)...$(ENDCOLOR)\c"
RMOBJECTS		= "$(RED)Removing $(NAME) objects...  $(ENDCOLOR)\c"
RMPROJECT		= "$(RED)Removing $(NAME) $(TYPEFILE)...  $(ENDCOLOR)\c"

SRC_DIR			= srcs
OBJ_DIR			= objs
SRC				= $(shell find $(SRC_DIR) -name "*.[cm]" -type f)
OBJ1			= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ				= $(OBJ1:$(SRC_DIR)/%.m=$(OBJ_DIR)/%.o)

CC				= clang
CFLAGS			+= -O2
RM				= rm -rf

all:			build $(NAME)

build :
				@mkdir -p $(OBJ_DIR)

$(NAME):		$(OBJ)
				@ echo $(PROJECT)
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo $(SUCCESS)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.[cm] 
				@echo $(OBJECTS)
				@$(CC) $(CFLAGS) -o $@ -c $<
				@echo $(SUCCESS)

clean:
				@echo $(RMOBJECTS)
				@$(RM) $(OBJ) $(OBJ_DIR)
				@echo $(SUCCESS)

xclean:
				@echo $(RMPROJECT)
				@$(RM) $(NAME)
				@echo $(SUCCESS)

fclean:			clean xclean

re:				fclean all

.PHONY:			all build $(NAME) clean xclean fclean re
