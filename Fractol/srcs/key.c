/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 09:57:45 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 10:41:57 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static void	iteration(t_mlx *mlx, int key)
{
	if (key == 34)
		mlx->fractal.i_max++;
	else if (key == 40 && mlx->fractal.i > 1)
		mlx->fractal.i_max--;
}

static void	move(t_mlx *mlx, int key)
{
	if (key == 123)
		mlx->fractal.x -= 10 / mlx->img.zoom;
	else if (key == 124)
		mlx->fractal.x += 10 / mlx->img.zoom;
	else if (key == 125)
		mlx->fractal.y += 10 / mlx->img.zoom;
	else if (key == 126)
		mlx->fractal.y -= 10 / mlx->img.zoom;
}

void		zoom(t_mlx *mlx, int key, int x, int y)
{
	if (key == 4 || key == 69)
	{
		mlx->img.zoom *= 1.1;
		mlx->fractal.x += ((float)x - W / 2) / mlx->img.zoom / 10;
		mlx->fractal.y += ((float)y - H / 2) / mlx->img.zoom / 10;
		mlx->fractal.i_max += (mlx->img.zoom > W / 5) ? 1 : 0;
	}
	else if (key == 5 || key == 78)
	{
		mlx->img.zoom *= 0.9;
		mlx->fractal.x -= ((float)x - W / 2) / mlx->img.zoom / 10;
		mlx->fractal.y -= ((float)y - H / 2) / mlx->img.zoom / 10;
		mlx->fractal.i_max -= (mlx->fractal.i_max > I_MAX) ? 1 : 0;
	}
}

int			key_hook(int key, t_mlx *mlx)
{
	if (key == 3)
		init_fractal(mlx, mlx->fractal.choice = (mlx->fractal.choice == 3) ?
			1 : mlx->fractal.choice + 1);
	else if (key == 15)
		init_fractal(mlx, mlx->fractal.choice);
	else if (key == 49)
		mlx->fractal.pause = (mlx->fractal.choice == 2 && !mlx->fractal.pause)
			? 1 : 0;
	else if (key == 53)
		quit(mlx);
	else if (key == 34 || key == 40)
		iteration(mlx, key);
	else if (key == 69 || key == 78)
		zoom(mlx, key, W / 2, H / 2);
	else if (key >= 123 && key <= 126)
		move(mlx, key);
	return (1);
}
