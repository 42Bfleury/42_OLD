/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:51:11 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/01 19:52:23 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

void		print_test(char *c, char *s, long i, char *m)
{
	char	*tmp;
	char	*format;

	tmp = ft_strjoin("%s %", c);
	format = ft_strjoin(tmp, " %s! ");
	free(tmp);
	printf("          -PRINTF %%%s %li :\n", c, i);
	printf("%i\n", printf(format, s, i, m));
	printf("%i\n", ft_printf(format, s, i, m));
	ft_putendl("_______________________________________");
	printf("          -PRINTF %%%s %li :\n", c, -i);
	printf("%i\n", printf(format, s, -i, m));
	printf("%i\n", ft_printf(format, s, -i, m));
	ft_putendl("_______________________________________");
	free(format);
}

void		print_unsigned_test(char *c, char *s, unsigned long i, char *m)
{
	char	*tmp;
	char	*format;

	tmp = ft_strjoin("%s %", c);
	format = ft_strjoin(tmp, " %s! ");
	free(tmp);
	printf("          -PRINTF %%%s %lu :\n", c, i);
	printf("%i\n", printf(format, s, i, m));
	printf("%i\n", ft_printf(format, s, i, m));
	ft_putendl("_______________________________________");
	free(format);
}

int			main(void)
{
	int				nb;
	double			nb1;
	char			*s;
	char			*m;

	nb = 42;
	nb1 = 42.5;
	s = "Ma bite mesure";
	m = "cm";
	ft_putendl("_______________________________________");
	print_test("i", s, nb, m);
	print_test("o", s, nb1, m);
	/*ft_putendl("          -PRINTF %s str:");
	printf("%i\n", printf("%s! ", str));
	ft_putnbr(ft_printf("%s! ", str));
	ft_putendl("\n          -PRINTF %S str:");
	printf("%i\n", printf("%S! ", str));
	ft_putnbr(ft_printf("%S! ", str));
	ft_putendl("          -PRINTF %p str:");
	printf("%i\n", printf("%s mesure %p cm! ", str, str));
	ft_putnbr(ft_printf("%s mesure %p cm! ", str, str));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %o 42 :");
	printf("%i\n", printf("%s mesure %o cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %o cm! ", str, nb));
	ft_putendl("\n          -PRINTF %o -42 :");
	printf("%i\n", printf("%s mesure %o cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %o cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %O 42 :");
	printf("%i\n", printf("%s mesure %O cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %O cm! ", str, nb));
	ft_putendl("\n          -PRINTF %O -42 :");
	printf("%i\n", printf("%s mesure %O cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %O cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %x 42 :");
	printf("%i\n", printf("%s mesure %x cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %x cm! ", str, nb));
	ft_putendl("\n          -PRINTF %x -42 :");
	printf("%i\n", printf("%s mesure %x cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %x cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %X 42 :");
	printf("%i\n", printf("%s mesure %X cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %X cm! ", str, nb));
	ft_putendl("\n          -PRINTF %X -42 :");
	printf("%i\n", printf("%s mesure %X cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %X cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %i 42 :");
	printf("%i\n", printf("%s mesure %i cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %i cm! ", str, nb));
	ft_putendl("\n          -PRINTF %i -42 :");
	printf("%i\n", printf("%s mesure %i cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %i cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %c 42 :");
	printf("%i\n", printf("%s mesure %c cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %c cm! ", str, nb));
	ft_putendl("\n          -PRINTF %c -42 :");
	printf("%i\n", printf("%s mesure %c cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %c cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %u 42 :");
	printf("%i\n", printf("%s mesure %u cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %u cm! ", str, nb));
	ft_putendl("\n          -PRINTF %u -42 :");
	printf("%i\n", printf("%s mesure %u cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %u cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %U 42 :");
	printf("%i\n", printf("%s mesure %U cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %U cm! ", str, nb));
	ft_putendl("\n          -PRINTF %U -42 :");
	printf("%i\n", printf("%s mesure %U cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %U cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %f 42 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, (float)nb));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb));
	ft_putendl("\n          -PRINTF %f -42 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, (float)nb1));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb1));
	ft_putendl("\n          -PRINTF %f 42.5 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, nb2));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb2));
	ft_putendl("\n          -PRINTF %f -42.5 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, nb3));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb3));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %F 42 :");
	printf("%i\n", printf("%s mesure %F cm! ", str, (double)nb));
	ft_putnbr(ft_printf("%s mesure %F cm! ", str, nb));
	ft_putendl("\n          -PRINTF %F -42 :");
	printf("%i\n", printf("%s mesure %F cm! ", str, (double)nb1));
	ft_putnbr(ft_printf("%s mesure %F cm! ", str, nb1));
	ft_putendl("\n          -PRINTF %F 42.5 :");
	printf("%i\n", printf("%s mesure %F cm! ", str, nb2));
	ft_putnbr(ft_printf("%s mesure %F cm! ", str, nb2));
	ft_putendl("\n          -PRINTF %F -42.5 :");
	printf("%i\n", printf("%s mesure %F cm! ", str, nb3));
	ft_putnbr(ft_printf("%s mesure %F cm! ", str, nb3));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %e 42 :");
	printf("%i\n", printf("%s mesure %e cm! ", str, (double)nb));
	ft_putnbr(ft_printf("%s mesure %e cm! ", str, nb));
	ft_putendl("\n          -PRINTF %e -42 :");
	printf("%i\n", printf("%s mesure %e cm! ", str, (double)nb1));
	ft_putnbr(ft_printf("%s mesure %e cm! ", str, nb1));
	ft_putendl("\n          -PRINTF %e 42.5 :");
	printf("%i\n", printf("%s mesure %e cm! ", str, nb2));
	ft_putnbr(ft_printf("%s mesure %e cm! ", str, nb2));
	ft_putendl("\n          -PRINTF %e -42.5 :");
	printf("%i\n", printf("%s mesure %e cm! ", str, nb3));
	ft_putnbr(ft_printf("%s mesure %e cm! ", str, nb3));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %E 42 :");
	printf("%i\n", printf("%s mesure %E cm! ", str, (double)nb));
	ft_putnbr(ft_printf("%s mesure %E cm! ", str, nb));
	ft_putendl("\n          -PRINTF %E -42 :");
	printf("%i\n", printf("%s mesure %E cm! ", str, (double)nb1));
	ft_putnbr(ft_printf("%s mesure %E cm! ", str, nb1));
	ft_putendl("\n          -PRINTF %E 42.5 :");
	printf("%i\n", printf("%s mesure %E cm! ", str, nb2));
	ft_putnbr(ft_printf("%s mesure %E cm! ", str, nb2));
	ft_putendl("\n          -PRINTF %E -42.5 :");
	printf("%i\n", printf("%s mesure %E cm! ", str, nb3));
	ft_putnbr(ft_printf("%s mesure %E cm! ", str, nb3));
	ft_putendl("\n_______________________________________");*/
	return (0);
}
