/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maths.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 06:22:32 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:15:07 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int		ft_addition(int a, int b)
{
	a = (int)malloc(sizeof(a));
	b = (int)malloc(sizeof(b));
	if (!a || !b)
		return (0);
	return (a + b);
}

int		ft_soustraction(int a, int b)
{
	a = (int)malloc(sizeof(a));
	b = (int)malloc(sizeof(b));
	if (!a || !b)
		return (0);
	return (a - b);
}

int		ft_multiplication(int a, int b)
{
	a = (int)malloc(sizeof(a));
	b = (int)malloc(sizeof(b));
	if (!a || !b)
		return (0);
	return (a * b);
}

int		ft_division(int a, int b)
{
	a = (int)malloc(sizeof(a));
	b = (int)malloc(sizeof(b));
	if (!a || !b)
		return (0);
	return (a / b);
}

int		ft_modulo(int a, int b)
{
	a = (int)malloc(sizeof(a));
	b = (int)malloc(sizeof(b));
	if (!a || !b)
		return (0);
	return (a % b);
}
