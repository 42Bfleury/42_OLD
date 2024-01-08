/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 06:37:10 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:46:03 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int			ft_is_positive(int nb)
{
	return ((nb < 0 ) ? 0 : 1);
}

void		ft_putnbr(int nb)
{
	int tmp;
	int size;

	size = 1;
	if (!ft_is_positive(nb))
	{
		ft_putchar('-');
		nb = -nb;
	}
	tmp = nb;
	while ((tmp /= 10) > 0)
		size *= 10;
	tmp = nb;
	while (size)
	{
		ft_putchar((char)(tmp / size) + '0');
		tmp %= size;
		size /= 10;
	}
}
