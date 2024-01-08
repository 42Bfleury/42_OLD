/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 07:01:50 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:01:20 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	colle(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i++ < y && x > 0 && ((j = 0) || 1))
	{
		while (j++ < x)
			if (j == 1 && (i == 1 || i == y))
				ft_putchar('A');
			else if (j == x && (i == 1 || i == y))
				ft_putchar('C');
			else
				ft_putchar((i == 1 || i == y || j == 1 || j == x) ? 'B' : ' ');
		ft_putchar('\n');
	}
}
