/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 07:57:50 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 11:10:55 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	julia(t_mlx *mlx, int x, int y)
{
	double	tmp;
	double	z_r;
	double	z_i;
	double	c_r;
	double	c_i;

	z_r = (x - W / 2) / mlx->img.zoom + mlx->fractal.x;
	z_i = (y - H / 2) / mlx->img.zoom + mlx->fractal.y;
	c_r = mlx->win.mouse_x / 500.0;
	c_i = mlx->win.mouse_y / 500.0;
	mlx->fractal.i = 0;
	while ((z_r * z_r + z_i * z_i) < 4 && mlx->fractal.i++ < mlx->fractal.i_max)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + c_r;
		z_i = 2 * tmp * z_i + c_i;
	}
	if (mlx->fractal.i <= mlx->fractal.i_max)
		image_put_pixel(mlx, x, y,
			(t_color){mlx->fractal.i % 255 * 1.5, 0,
				255 - mlx->fractal.i % 255 * 1.5});
}
