/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 09:57:26 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 10:56:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	print_instruction(void)
{
	ft_putendl("------------------ Fract'ol -------------------");
	ft_putendl("Move Up                                     [^]");
	ft_putendl("Move Down                                   [v]");
	ft_putendl("Move Left                                   [<]");
	ft_putendl("Move Right                                  [>]");
	ft_putendl("Change Fractal                              [F]");
	ft_putendl("More Iteration                              [I]");
	ft_putendl("Less Iteration                              [K]");
	ft_putendl("Reset Fractal                               [R]");
	ft_putendl("Pause Fractal                           [SPACE]");
	ft_putendl("Zoom In                       [SCROLL DOWN]/[+]");
	ft_putendl("Zoom Out                        [SCROLL UP]/[-]");
}

int		main(int ac, char **av)
{
	int		fractal;

	if (ac != 2)
		die(NULL, "Usage : ./fractol <fractal>!");
	fractal = ft_atoi(av[1]);
	if ((ft_strlen(av[1]) != 1) || (ft_isdigit(av[1][0]) != 1)
		|| fractal < 1 || fractal > 3)
		die(NULL, "Usage : ./fractol <fractal>!");
	init(fractal);
	return (0);
}
