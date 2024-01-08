/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 20:56:12 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 16:21:17 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i++ <= 99 && ((j = i) || 1))
		while (j++ <= 99)
		{
			if ((j - 1) > 1)
				ft_putstr(", ");
			ft_putchar(((i - 1) / 10) + '0');
			ft_putchar(((i - 1) % 10) + '0');
			ft_putchar(' ');
			ft_putchar(((j - 1) / 10) + '0');
			ft_putchar(((j - 1) % 10) + '0');
		}
}
