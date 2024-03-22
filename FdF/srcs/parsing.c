/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 03:45:08 by bfleury           #+#    #+#             */
/*   Updated: 2016/12/11 03:12:32 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int	in_tab(char c, char *tab)
{
	int		i;

	i = 0;
	while (i < 12)
	{
		if (c == tab[i])
			return (1);
		i++;
	}
	return (0);
}

static int	str_is_number(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] == ',' && i > 0
			&& ft_isdigit(str[i - 1]) && str[i + 1] == '0' && str[i + 2] == 'x'
			&& (ft_isdigit(str[i + 3]) || in_tab(str[i + 3], "ABCDEFabcdef"))
			&& (ft_isdigit(str[i + 4]) || in_tab(str[i + 4], "ABCDEFabcdef"))
			&& (ft_isdigit(str[i + 5]) || in_tab(str[i + 5], "ABCDEFabcdef"))
			&& (ft_isdigit(str[i + 6]) || in_tab(str[i + 6], "ABCDEFabcdef"))
			&& (ft_isdigit(str[i + 7]) || in_tab(str[i + 7], "ABCDEFabcdef"))
			&& (ft_isdigit(str[i + 8]) || in_tab(str[i + 8], "ABCDEFabcdef")))
			i += 8;
		else if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	*convert_line(t_mlx *mlx, char *line)
{
	int			i;
	int			length;
	int			*result;
	char		**str_map;

	str_map = ft_strsplit(line, ' ');
	length = ft_count_words(line, ' ');
	if (length != mlx->map.width)
		die(mlx, "Map not well formated! (line size)");
	if ((result = (int*)ft_memalloc(sizeof(int) * length)) == NULL)
		die(mlx, "Failed to allocate line memory! (convert_line)");
	i = 0;
	while (i < length)
	{
		if (!str_is_number(str_map[i]))
			die(mlx, "Map not well formated! (number)");
		result[i] = ft_atoi(str_map[i]);
		ft_strdel(&str_map[i++]);
	}
	free(str_map);
	return (result);
}

int			**parse_map(t_mlx *mlx)
{
	int			i;
	int			fd;
	int			read;
	char		*line;
	int			**result;

	if ((result = (int**)ft_memalloc(sizeof(int*) * mlx->map.height)) == NULL)
		die(NULL, "Failed to allocate map memory! (parse_map)");
	if ((fd = open(mlx->map.file, O_RDONLY)) < 0)
		die(mlx, "Failed to open file! (parse_map)");
	i = 0;
	while ((read = get_next_line(fd, &line)))
	{
		if (read < 0)
			die(mlx, "Failed to read file! (parse_map)");
		result[i] = convert_line(mlx, line);
		i++;
		ft_strdel(&line);
	}
	close(fd);
	return (result);
}

int			get_nb_line(t_mlx *mlx)
{
	int		fd;
	int		read;
	int		nb_line;
	char	*line;

	if ((fd = open(mlx->map.file, O_RDONLY)) < 0)
		die(NULL, "Failed to open file! (get_nb_line)");
	nb_line = 0;
	while ((read = get_next_line(fd, &line)))
	{
		if (read < 0)
			die(NULL, "Failed to read file! (get_nb_line)");
		if (!mlx->map.width)
			mlx->map.width = ft_count_words(line, ' ');
		nb_line++;
		ft_strdel(&line);
	}
	close(fd);
	return (nb_line);
}
