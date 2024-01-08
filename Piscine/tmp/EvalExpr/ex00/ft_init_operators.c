/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_operators.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 21:47:50 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 22:33:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

void		*ft_init_operators(void)
{
	int	(*f[5])(int, int);

	f[0] = &ft_multiplication;
	f[1] = &ft_division;
	f[2] = &ft_modulo;
	f[3] = &ft_addition;
	f[4] = &ft_soustraction;

	return (*f);
}
