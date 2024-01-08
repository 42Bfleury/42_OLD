/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 22:31:05 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 06:16:00 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EvalExpr.h"

int		do_op(int argc, char **argv)
{
	int i;
	int result;
	char *operator;
	int (*f[5])(int, int);
 
	f[0] = &ft_addition;
	f[1] = &ft_soustraction;
	f[2] = &ft_multiplication;
	f[3] = &ft_division;
	f[4] = &ft_modulo;
	operator = "+-*/%";
	result = 0;
	if (argc == 4)
	{
		i = 0;
		if (argv[2][0] == '/'  && !argv[2][1] && !ft_atoi(argv[3]))
		{
			printf("Stop : division by zero\n");
			return (0);
		}
		else if (argv[2][0] == '%'  && !argv[2][1] && !ft_atoi(argv[3]))
		{
			printf("Stop : modulo by zero\n");
			return (0);
		}
		while (operator[i])
		{
			if (operator[i] == argv[2][0] && !argv[2][1])
				result = f[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
