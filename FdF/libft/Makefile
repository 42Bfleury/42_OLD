# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 05:59:52 by bfleury           #+#    #+#              #
#    Updated: 2016/11/21 08:30:44 by bfleury          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

SRC_DIR			= srcs
OBJ_DIR			= objs
SRC				= ft_abs.c \
				ft_atoi.c \
				ft_atoi_base.c \
				ft_bzero.c \
				ft_count_words.c \
				ft_intlen.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_islower.c \
				ft_islower.c \
				ft_isprint.c \
				ft_isupper.c \
				ft_itoa.c \
				ft_itoa_base.c \
				ft_longlen.c \
				ft_lstadd.c \
				ft_lstappend.c \
				ft_lstdel.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_ltoa.c \
				ft_ltoa_base.c \
				ft_max.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_min.c \
				ft_pow.c \
				ft_printbit_char.c \
				ft_printbit_int.c \
				ft_printbit_long.c \
				ft_printbit_short.c \
				ft_printnbit.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putfloat.c \
				ft_putfloat_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strlower.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strsplit.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strtrim.c \
				ft_strupper.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_uintlen.c \
				ft_uitoa.c \
				ft_uitoa_base.c \
				ft_ulonglen.c \
				ft_ultoa.c \
				ft_ultoa_base.c \
				ft_wordlen.c \
				get_next_line.c

OBJ				= $(SRC:%.c=$(OBJ_DIR)/%.o)

CC				= clang
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -rf

all:			build $(NAME)

build :
				@mkdir -p $(OBJ_DIR)

$(NAME):		$(OBJ)
				@ar rc $(NAME) $(OBJ)
				@ranlib $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
				@$(CC) $(CFLAGS) -o $@ -c $<

clean:
				@$(RM) $(OBJ_DIR)

xclean:
				@$(RM) $(NAME)

fclean:			clean xclean

re:				fclean all

.PHONY:			all build clean xclean fclean re
