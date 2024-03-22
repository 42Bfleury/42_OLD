# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 03:44:46 by bfleury           #+#    #+#              #
#    Updated: 2016/11/17 00:28:29 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libmlx.a

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
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.[cm] 
				@$(CC) $(CFLAGS) -o $@ -c $<

clean:
				@$(RM) $(OBJ) $(OBJ_DIR)

xclean:
				@$(RM) $(NAME)

fclean:			clean xclean

re:				fclean all

.PHONY:			all build clean xclean fclean re
