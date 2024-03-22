/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:08:43 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 10:57:02 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	init_fractal(t_mlx *mlx, int fractal)
{
	mlx->fractal.x = 0;
	mlx->fractal.y = 0;
	mlx->img.zoom = W / 5;
	mlx->fractal.pause = 0;
	mlx->fractal.i_max = I_MAX;
	mlx->fractal.choice = fractal;
}

void	print_fractal(t_mlx *mlx, int x, int y)
{
	if (mlx->fractal.choice == 1)
		mandelbrot(mlx, x, y);
	else if (mlx->fractal.choice == 2)
		julia(mlx, x, y);
	else if (mlx->fractal.choice == 3)
		burning(mlx, x, y);
}
