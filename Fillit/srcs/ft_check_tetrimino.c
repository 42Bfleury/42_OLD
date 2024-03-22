/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetrimino.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 06:01:41 by bfleury           #+#    #+#             */
/*   Updated: 2016/01/14 07:59:34 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void		ft_inittetriminostable(unsigned short *table)
{
	table[0] = 0x2E00;
	table[1] = 0x44C0;
	table[2] = 0x4c40;
	table[3] = 0x4C80;
	table[4] = 0x4E00;
	table[5] = 0x6C00;
	table[6] = 0x8888;
	table[7] = 0x88C0;
	table[8] = 0x8C40;
	table[9] = 0x8C80;
	table[10] = 0x8E00;
	table[11] = 0xC440;
	table[12] = 0xC600;
	table[13] = 0xC880;
	table[14] = 0xCC00;
	table[15] = 0xE200;
	table[16] = 0xE400;
	table[17] = 0xE800;
	table[18] = 0xF000;
}

int				ft_check_tetrimino(unsigned short bin)
{
	int				i;
	unsigned short	tetriminos[19];

	i = 0;
	ft_inittetriminostable(tetriminos);
	while (i++ < 19)
		if (tetriminos[i - 1] == bin)
			return (1);
	return (0);
}
