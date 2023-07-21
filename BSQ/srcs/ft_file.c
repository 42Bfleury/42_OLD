/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:17:55 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/19 23:20:10 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_open_file(t_map *map)
{
	map->fd = open(map->filename, O_RDONLY);
	return (map->fd != -1);
}

int	ft_read_file(t_map *map)
{
	map->bytes_read = read(map->fd, map->buffer, BUFFER_SIZE);
	return (map->bytes_read > 0);
}

int	ft_get_line(t_map *map)
{
	int		i;
	char	tmp[100000];

	while (ft_read_file(map))
	{
		i = 0;
		while (i < BUFFER_SIZE)
		{
			if (map->buffer[i] == '\n')
			{
				ft_strncat(tmp, map->buffer, i);
				map->line = tmp;
				return (1);
			}
			i++;
		}
		ft_strncat(tmp, map->buffer, i);
		map->line = tmp;
	}
	return (0);
}
