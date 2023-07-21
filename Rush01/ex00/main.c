/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:14:44 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/09 23:43:41 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	error(void)
{
	ft_putstr("Error\n");
	return (-1);
}

char	**ft_init_map(int size)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	map = (char **)malloc((sizeof(char *) * size) + 1);
	while (i < size)
	{
		map[i] = (char *)malloc(sizeof(char) * size);
		j = 0;
		while (j < size)
		{
			map[i][j] = '0';
			j++;
		}
		i++;
	}
	map[i] = 0;
	return (map);
}

void	ft_print_result(char **map)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_count_map_size(map);
	while (map[i])
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		size;
	char	**map;
	char	param[16];

	if (argc != 2)
		return (error());
	if (ft_check_arg(argv[1]))
	{
		ft_copywithoutspace(argv[1], param);
		size = ft_strlen(param) / 4;
		map = ft_init_map(size);
		ft_check_map(param, size);
		ft_resolve(map);
		ft_print_result(map);
	}
	else
		return (error());
		printf("SALOPE!");
	return (1);
}
