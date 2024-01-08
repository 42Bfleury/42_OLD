/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:32:14 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:33:38 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i++ <= 9 && ((j = i) || 1))
		while (j++ <= 9 && ((k = j) || 1))
			while (k++ <= 9)
			{
				if (!(i == 1 && j == 2 && k == 3))
					ft_putstr(", ");
				ft_putchar('0' + (i - 1));
				ft_putchar('0' + (j - 1));
				ft_putchar('0' + (k - 1));
			}
}
