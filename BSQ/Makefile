# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 13:27:32 by bfleury           #+#    #+#              #
#    Updated: 2023/07/19 14:00:58 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= bsq
TYPEFILE		= executable
DEBUG			= FALSE

RED				= \033[31m
YELLOW			= \033[33m
GREEN			= \033[1;32m
END				= \033[0m

SUCCESS			= "$(GREEN)[SUCCESS!]$(END)"
PROJECT			= "$(YELLOW)Generating $(NAME) $(TYPEFILE)...     $(END)\c"
EXE_RMV			= "$(RED)Removing $(NAME) $(TYPEFILE)...       $(END)\c"

SRC_DIR			= srcs
SRCS			= $(shell find $(SRC_DIR) -name '*.c' -type f)

CC				= cc
RM				= rm -rf

CFLAGS			+= -Wall -Wextra -Werror

ifeq ($(DEBUG),TRUE)
	CFLAGS		+= -g
endif

all:			$(NAME)

$(NAME):
				@echo $(PROJECT)
				@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
				@echo $(SUCCESS)

clean:
				@echo $(EXE_RMV)
				@$(RM) $(NAME) $(OBJ_DIR)
				@echo $(SUCCESS)

fclean:			clean

re:				fclean all

.PHONY:			all clean fclean re
