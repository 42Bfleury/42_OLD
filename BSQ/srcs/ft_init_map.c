/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:24:41 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/19 23:24:51 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_init_map(t_map *map)
{
	int		len;

	if (!ft_open_file(map))
		return (0);
	if (ft_get_line(map))
		printf("%s\n", map->line);
	if (close(map->fd) == -1)
		return (0);
	len = ft_strlen(map->line);
	if (!ft_is_printable(map->line[len - 3]))
		return (0);
	map->c_empty = map->line[len - 3];
	if (!ft_is_printable(map->line[len - 1]))
		return (0);
	map->c_full = map->line[len - 1];
	if (!ft_is_printable(map->line[len - 2]))
		return (0);
	map->c_obstacle = map->line[len - 2];
	map->line[len - 3] = 0;
	if (!ft_str_is_num(map->line))
		return (1);
	map->nb_line = ft_atoi(map->line);
	return (1);
}
