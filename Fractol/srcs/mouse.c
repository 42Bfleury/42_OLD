/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 08:33:02 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 10:42:57 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int			mouse_move(int x, int y, t_mlx *mlx)
{
	if (!mlx->fractal.pause && x >= 0 && x < mlx->win.width
		&& y >= 0 && y < mlx->win.height)
	{
		mlx->win.mouse_x = mlx->fractal.pause ? mlx->win.mouse_x : (x - W / 2);
		mlx->win.mouse_y = mlx->fractal.pause ? mlx->win.mouse_x : (y - H / 2);
	}
	return (1);
}

int			mouse_hook(int key, int x, int y, t_mlx *mlx)
{
	if (x >= 0 && x < mlx->win.width && y >= 0 && y < mlx->win.height
		&& (key == 4 || key == 5))
		zoom(mlx, key, x, y);
	return (1);
}
