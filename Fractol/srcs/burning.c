/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 22:09:48 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 07:47:11 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static double	dabs(double n)
{
	return (n < 0 ? -n : n);
}

void			burning(t_mlx *mlx, int x, int y)
{
	double	tmp;
	double	z_r;
	double	z_i;
	double	c_r;
	double	c_i;

	z_r = 0;
	z_i = 0;
	c_r = (x - W / 2) / mlx->img.zoom + mlx->fractal.x;
	c_i = (y - H / 2) / mlx->img.zoom + mlx->fractal.y;
	mlx->fractal.i = 0;
	while ((z_r * z_r + z_i * z_i) < 4 && mlx->fractal.i++ < mlx->fractal.i_max)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + c_r;
		z_i = 2 * dabs(tmp * z_i) + c_i;
	}
	if (mlx->fractal.i <= mlx->fractal.i_max)
		image_put_pixel(mlx, x, y,
			(t_color){200,
				200 - (mlx->fractal.i < 100 ? mlx->fractal.i * 2 : 200), 0});
}
