/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:25:17 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/19 23:35:26 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	**create_mathmap(t_map *terrain)
{
	int	i;
	int	**map;

	i = 0;
	map = (int **)malloc(terrain->info.height * sizeof(int *));
	if (!map)
	{
		free(map);
		return (NULL);
	}
	while (i < terrain->info.height)
	{
		map[i] = (int *)malloc((terrain->info.length) * sizeof(int));
		if (!map[i])
		{
			while (i >= 0)
				free(map[i--]);
			free_map(*terrain);
			free(map);
			free(terrain);
			return (NULL);
		}
		i++;
	}
	return (map);
}

int	**new_map(t_map *terrain)
{
	int	i;
	int	**map;

	i = 0;
	map = create_mathmap(terrain);
	while (i < terrain->info.height)
	{
		if (terrain->content[i][0] == terrain->info.empty)
			map[i][0] = 1;
		if (terrain->content[i][0] == terrain->info.obstacle)
			map[i][0] = 0;
		i++;
	}
	i = 0;
	while (i < terrain->info.length)
	{
		if (terrain->content[0][i] == terrain->info.empty)
			map[0][i] = 1;
		if (terrain->content[0][i] == terrain->info.obstacle)
			map[0][i] = 0;
		i++;
	}
	return (map);
}

int	ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	if (c <= a && c <= b)
		return (c);
	else
		return (0);
}

t_square	find_bsq(int **math_map, int length, int height)
{
	int			i;
	int			j;
	int			max;
	t_square	bsq;

	i = 0;
	max = 0;
	bsq.line = 0;
	bsq.col = 0;
	while (i < height)
	{
		j = 0;
		while (j < length)
		{
			if (math_map[i][j] > max)
			{
				bsq.line = i;
				bsq.col = j;
				max = math_map[i][j++];
				bsq.size = max;
			}
		}
		i++;
	}
	return (bsq);
}
