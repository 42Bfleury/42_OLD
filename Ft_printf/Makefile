# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleury <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 05:59:52 by bfleury           #+#    #+#              #
#*   Updated: 2016/10/30 02:38:19 by bfleury          ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= clang
CFLAGS		= -Wall -Wextra -Werror

LIBDIR		= libft
SRCLIB		= ft_abs.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_countwords.c \
			ft_intlen.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_islower.c \
			ft_isprint.c \
			ft_isupper.c \
			ft_itoa.c \
			ft_itoa_base.c \
			ft_longlen.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstappend.c \
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
			ft_wordlen.c

OBJLIB		= $(SRCLIB:.c=.o)
SRCLIBDIR	= $(SRCLIB:%.c=$(LIBDIR)/%.c)

SRC			= ft_printf.c \
			ft_parse_format.c \
			ft_convert_format.c \
			ft_print_int.c \
			ft_print_octal.c \
			ft_print_float.c \
			ft_print_hexa.c

OBJ			= $(SRC:.c=.o)
SRCDIR		= $(SRC:%.c=srcs/%.c)

$(NAME):
			@echo "Generating objects..."
			@$(CC) $(CFLAGS) -c $(SRCLIBDIR) $(SRCDIR)
			@echo "Objects generated with success!"
			@echo "Generating $(NAME)..."
			@ar rc $(NAME) $(OBJLIB) $(OBJ)
			@ranlib $(NAME)
			@echo "$(NAME) generated with success!"

all:		$(NAME)

clean:
			@echo "Removing objects..."
			@rm -f $(OBJLIB) $(OBJ)
			@echo "Objects removed with success!"

lclean:
			@echo "Removing $(NAME)..."
			@rm -f $(NAME)
			@echo "$(NAME) removed with success!"

fclean:		clean lclean

re:			fclean all

test:		all clean
			@$(CC) $(CFLAGS) -I includes -L . -lftprintf -o test main.c
			@echo "Executable test generated with success!"

xclean:
			@echo "Removing executable test..."
			@rm -f test
			@echo "Executable test removed with success!"

retest:		lclean xclean test

.PHONY:		clean fclean
