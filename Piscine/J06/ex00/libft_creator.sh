#!/bin/sh
gcc -Wall -Wextra -Werror -c ft_*.c
ar rc libft.a *.o
ranlib libft.a
rm -rf *.o
