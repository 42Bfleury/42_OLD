/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 04:02:46 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/24 11:57:38 by qsalerne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../H/bsq.h"

int		ft_column(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		ret;
	int		i;
	int		j;

	j = 0;
	while ((ret = read(fd, &buffer, BUFFER_SIZE)) && ret > 0)
	{
		i = 0;
		while (i < BUFFER_SIZE)
		{
			if (buffer[i] == '\n')
				return ((j * BUFFER_SIZE) + i);
			i++;
		}
		j++;
	}
	return (0);
}

char	ft_create_map_info(t_mapinfo *map_info, char *path)
{
	char	param[14];
	char	buffer;
	int		fd;
	int		i;

	i = 0;
	if ((fd = open(path, O_RDONLY)) && fd == -1)
		return (0);
	while (read(fd, &buffer, 1) && buffer != '\n')
	{
		if (i > 13)
			return (0);
		param[i] = buffer;
		i++;
	}
	buffer = (i < 4) ? 0 : 1;
	map_info->square = param[i - 1];
	map_info->blob = param[i - 2];
	map_info->empty = param[i - 3];
	param[i - 3] = '\0';
	if (((map_info->nb_line = ft_atoi(param)) && map_info->nb_line == 0)
		|| ((map_info->nb_column = ft_column(fd)) && map_info->nb_column == 0))
		return (0);
	close(fd);
	return (buffer);
}
