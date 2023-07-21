/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:39:31 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/09 23:41:10 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_possible(char **map, int x, int y, char n)
{
	int	i;
	int	size;

	i = 0;
	size = ft_count_map_size(map);
	while (i < size)
	{
		if (i != x && map[i][y] == n)
			return (0);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (i != y && map[x][i] == n)
			return (0);
		i++;
	}
	return (1);
}

void	ft_fill_case(char **map, int x, int y, char n)
{
	map[x][y] = n;
	if (!ft_resolve(map))
		map[x][y] = '0';
}

int	ft_resolve(char **map)
{
	int	x;
	int	y;
	int	n;
	int	size;

	x = 0;
	size = ft_count_map_size(map);
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			if (map[x][y] == '0')
			{
				n = '1';
				while (n <= '0' + size)
				{
					if (ft_is_possible(map, x, y, n))
						ft_fill_case(map, x, y, n);
					n++;
				}
				return (0);
			}
			y++;
		}
		x++;
	}
	return (1);
}
