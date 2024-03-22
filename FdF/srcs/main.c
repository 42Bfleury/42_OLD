/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 03:24:27 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 10:37:31 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	print_instructions(char *title)
{
	ft_putstr("-------------------");
	ft_putstr(title);
	ft_putendl("-------------------");
	ft_putendl("Move up                                   [^]");
	ft_putendl("Move down                                 [v]");
	ft_putendl("Move left                                 [<]");
	ft_putendl("Move right                                [>]");
	ft_putendl("Zoom in                     [scroll down]/[+]");
	ft_putendl("Zoom out                      [scroll up]/[-]");
	ft_putendl("More amplitude                            [q]");
	ft_putendl("Less amplitude                            [a]");
	ft_putendl("Reset map                             [space]");
	ft_putendl("Quit                                  [echap]");
	ft_putendl("---------------------------------------------");
}

static int	check_extension(char *file)
{
	int		i;

	if (ft_strchr(file, '.'))
	{
		if ((i = ft_strlen(file)) >= 4 && !ft_strcmp(file + i - 4, ".fdf"))
		{
			if (i == 4)
				die(NULL, "wrong file name! <map.fdf>");
			return (1);
		}
		die(NULL, "wrong file extension! <.fdf>");
	}
	return (0);
}

int			main(int ac, char **av)
{
	if (ac == 2 && check_extension(av[1]))
	{
		print_instructions(FDF_WIN_T);
		init(FDF_WIN_W, FDF_WIN_H, FDF_WIN_T, av[1]);
	}
	else
		die(NULL, "Usage: ./fdf <map.fdf>");
	return (0);
}
