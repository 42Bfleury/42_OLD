/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 10:29:25 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 16:43:57 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i++] && (j = i))
		while (base[j++])
			if (base[i - 1] == '+' || base[i - 1] == '-'
			|| base[i - 1] == base[j - 1])
				return (0);
	return ((--i < 2) ? 0 : i);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		b;

	if ((b = ft_check_base(base)))
	{
		if (nbr < 0)
			ft_putchar('-');
		if (nbr <= -b || b <= nbr)
			ft_putnbr_base(((nbr < 0) ? -(nbr / b) : nbr / b), base);
		ft_putchar((nbr > 0) ? base[nbr % b] : base[-(nbr % b)]);
	}
}
