/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:09:48 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 07:42:58 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	image_put_pixel(t_mlx *mlx, int x, int y, t_color c)
{
	if (0 <= x && x < mlx->img.width && 0 <= y && y < mlx->img.height)
	{
		mlx->img.data[(mlx->img.sl * y) + (4 * x) + 2] = c.red;
		mlx->img.data[(mlx->img.sl * y) + (4 * x) + 1] = c.green;
		mlx->img.data[(mlx->img.sl * y) + (4 * x) + 0] = c.blue;
	}
}

int		draw(t_mlx *mlx)
{
	double		x;
	double		y;

	ft_bzero(mlx->img.data, (mlx->img.sl * mlx->img.height));
	if (mlx->img.zoom && ((y = 0) || 1))
		while (y++ < mlx->img.height && ((x = 0) || 1))
			while (x++ < mlx->img.width)
				print_fractal(mlx, x - 1, y - 1);
	if (!mlx_put_image_to_window(mlx->ptr, mlx->win.ptr, mlx->img.ptr, 0, 0))
		die(mlx, "Failed to load image in the window! (draw)");
	return (1);
}
