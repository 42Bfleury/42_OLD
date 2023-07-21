/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:25:53 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/19 23:31:47 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_error(char *message)
{
	if (message[0])
		write(2, message, ft_strlen(message));
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	t_map	*map;

	i = 1;
	map = (t_map *) malloc(sizeof(t_map));
	while (i < ac)
	{
		map->filename = av[i];
		if (!ft_init_map(map))
			return (ft_error("map error\n"));
		printf("%i\n", map->nb_line);
		printf("%c\n", map->c_empty);
		printf("%c\n", map->c_obstacle);
		printf("%c\n", map->c_full);
		i++;
	}
	return (0);
}
