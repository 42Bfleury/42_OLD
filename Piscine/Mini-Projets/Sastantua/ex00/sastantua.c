/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 07:14:42 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:44:08 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sastantua.h"

static int		get_nb_floor(int size)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i++ < size)
		result += (2 + i);
	return (result);
}

static int		get_step(int i0, int i1)
{
	return (get_nb_floor(i0 - 1) + i1);
}

static void		fill_sastantua(int size, int nb_floor, int nb_brick, int step)
{
	int		i;

	i = 0;
	while (i++ < nb_brick)
		if (size >= 5
			&& step == (nb_floor - (size / 2) + ((size + 1) % 2))
			&& i == (((nb_brick + size) / 2) -
				(((size > 3 && !(size % 2)) ? (size - 1) : size) % 2)))
			ft_putchar('$');
		else if (step > (nb_floor - size)
			&& i > ((nb_brick - ((size > 3 && !(size % 2)) ? (size - 2) : size))
				/ 2)
			&& i < (((nb_brick + size) / 2) - (size % 2) +
				((size > 3 && !(size % 2)) ? 1 : 2)))
			ft_putchar('|');
		else
			ft_putchar('*');
}

void			sastantua(int size)
{
	int		i[3];
	int		nb_floor;
	int		nb_brick;
	int		nb_space;

	i[0] = 0;
	nb_floor = get_nb_floor(size);
	nb_brick = 1;
	nb_space = ((size > 3)
				? (nb_floor + (3 * (size - 1)) - 2)
				: (nb_floor + (2 * (size - 1))));
	while (i[0]++ < size && ((i[1] = 0) || 1))
	{
		while (i[1]++ < (2 + i[0]) && ((i[2] = 0) || 1))
		{
			while (i[2]++ < nb_space)
				ft_putchar((i[2] == nb_space) ? '/' : ' ');
			fill_sastantua(
				size, nb_floor, nb_brick, get_step(i[0], i[1]));
			ft_putchar((nb_brick += 2) ? '\\' : '\\');
			ft_putchar((nb_space--) ? '\n' : '\n');
		}
		nb_brick += ((i[0] > 2) ? 6 : 4);
		nb_space -= ((i[0] > 2) ? 3 : 2);
	}
}
