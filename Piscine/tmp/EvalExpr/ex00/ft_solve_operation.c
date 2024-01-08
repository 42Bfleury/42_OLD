/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_operation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 08:42:33 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:53:42 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int			ft_solve_operation(char **str)
{
	int a;
	int b;
	int i;
	char *operator;
	int (*f[5])(int, int);

	i = 0;
	a = ft_atoi(str[0]);
	b = ft_atoi(str[2]);
	operator = "*/%+-";
	*f = ft_init_operators();
	while (operator[i])
	{
		if(operator[i] == str[1][0])
			return (f[i](a,b));
		i++;
	}
	return (0);
}
