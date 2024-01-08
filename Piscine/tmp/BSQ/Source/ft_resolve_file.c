/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsalerne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 15:34:04 by qsalerne          #+#    #+#             */
/*   Updated: 2015/09/24 23:32:34 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../H/bsq.h"

void	ft_seek_next_line(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) && buffer != '\n')
		;
}

int		*ft_init(int *calc, t_mapinfo *map_info)
{
	int		i;

	calc = (int *)malloc(sizeof(int) * map_info->nb_column);
	i = 0;
	while (i < map_info->nb_column)
	{
		calc[i] = 0;
		i++;
	}
	ft_seek_next_line(map_info->fd);
	return (calc);
}

void	ft_get_max(int *calc, int coord[2], t_mapinfo *map_info)
{
	int		value;
	int		x;

	value = calc[coord[0]];
	x = coord[0];
	while (value)
	{
		if (calc[x] < calc[coord[0]] || x == -1)
			return ;
		x--;
		value--;
	}
	map_info->size = calc[coord[0]];
	map_info->coord[0] = coord[0] - map_info->size + 1;
	map_info->coord[1] = coord[1] - map_info->size + 1;
}

char	ft_calc(char *buffer, t_mapinfo *map_info)
{
	int		coord[2];
	int		*calc;
	int		ret;

	calc = NULL;
	calc = ft_init(calc, map_info);
	coord[1] = 0;
	while ((ret = read(map_info->fd, buffer, map_info->nb_column + 1)) > 0)
	{
		coord[0] = 0;
		while (coord[0] < ret)
		{
			if (buffer[coord[0]] == map_info->empty)
				calc[coord[0]] = calc[coord[0]] + 1;
			else if (buffer[coord[0]] == map_info->blob)
				calc[coord[0]] = 0;
			else if (buffer[coord[0]] != '\n')
				return (0);
			if (calc[coord[0]] > map_info->size)
				ft_get_max(calc, coord, map_info);
			coord[0]++;
		}
		coord[1]++;
	}
	return (1);
}

char	ft_resolve_file(char *path)
{
	t_mapinfo	map_info;
	char		*buffer;

	if (ft_create_map_info(&map_info, path) == 0)
		return (ft_puterror());
	map_info.fd = open(path, O_RDONLY);
	map_info.size = 0;
	buffer = (char *)malloc(sizeof(*buffer) * map_info.nb_column);
	if (!buffer || map_info.fd == -1
			|| !ft_calc(buffer, &map_info))
		return (ft_puterror());
	close(map_info.fd);
	map_info.fd = open(path, O_RDONLY);
	ft_display_map(buffer, map_info);
	close(map_info.fd);
	return (1);
}
