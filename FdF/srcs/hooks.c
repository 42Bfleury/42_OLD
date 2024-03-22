/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 06:38:51 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 10:30:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	move(t_mlx *mlx, int key)
{
	if (key == 123)
		mlx->map.x -= 200 / mlx->img.zoom;
	else if (key == 124)
		mlx->map.x += 200 / mlx->img.zoom;
	else if (key == 125)
		mlx->map.y += 200 / mlx->img.zoom;
	else if (key == 126)
		mlx->map.y -= 200 / mlx->img.zoom;
	draw_map(mlx);
}

static void	deep(t_mlx *mlx, int key)
{
	if (key == 12 && mlx->map.amp < FDF_AMP_MAX)
		mlx->map.amp += 0.1;
	else if (key == 0 && mlx->map.amp > -FDF_AMP_MAX)
		mlx->map.amp -= 0.1;
	if (mlx->map.amp >= -FDF_AMP_MAX && mlx->map.amp <= FDF_AMP_MAX)
		draw_map(mlx);
}

void		zoom(t_mlx *mlx, int key)
{
	if ((key == 4 || key == 69) && mlx->img.zoom < FDF_ZOOM_MAX)
		mlx->img.zoom += 2;
	else if ((key == 5 || key == 78) && mlx->img.zoom >= 2)
		mlx->img.zoom -= 2;
	if (mlx->img.zoom >= 0 && mlx->img.zoom < FDF_ZOOM_MAX)
		draw_map(mlx);
}

int			key_hook(int key, t_mlx *mlx)
{
	if (123 <= key && key <= 126)
		move(mlx, key);
	else if (key == 69 || key == 78)
		zoom(mlx, key);
	else if (key == 12 || key == 0)
		deep(mlx, key);
	else if (key == 49)
		reset(mlx);
	else if (key == 53)
		quit(mlx);
	return (0);
}

int			mouse_hook(int key, int x, int y, t_mlx *mlx)
{
	if (x && y && (key == 4 || key == 5))
		zoom(mlx, key);
	return (0);
}
