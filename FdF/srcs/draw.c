/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 07:51:58 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 07:15:59 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static t_color	get_color(t_mlx *mlx, int z1, int z2)
{
	if ((z1 < 0 || z2 < 0) && z1 == z2)
		return (DBLUE);
	else if (z1 < 0 || z2 < 0)
		return (LBLUE);
	else if (z1 == 0 && z2 == 0)
		return (BROWN);
	else if (z1 == z2 && z1 / mlx->img.zoom <= 10)
		return (GREEN);
	else if (z1 / mlx->img.zoom > 10 || z2 / mlx->img.zoom > 10)
		return (WHITE);
	else
		return (GREY);
}

static void		image_put_pixel(t_mlx *mlx, t_point a, t_color c)
{
	if (0 <= a.x && a.x < mlx->win.width && 0 <= a.y && a.y < mlx->win.height)
	{
		mlx->img.data[(mlx->img.sl * a.y) + (4 * a.x) + 2] = c.red;
		mlx->img.data[(mlx->img.sl * a.y) + (4 * a.x) + 1] = c.green;
		mlx->img.data[(mlx->img.sl * a.y) + (4 * a.x) + 0] = c.blue;
	}
}

static void		trace_segment(t_mlx *mlx, t_point a, t_point b)
{
	t_bres		bres;

	bres.dx = abs((b.x - a.x));
	bres.sx = a.x < b.x ? 1 : -1;
	bres.dy = abs((b.y - a.y));
	bres.sy = a.y < b.y ? 1 : -1;
	bres.e = (bres.dx > bres.dy ? bres.dx : -bres.dy) / 2;
	while (!(a.x == b.x && a.y == b.y))
	{
		image_put_pixel(mlx, a, get_color(mlx, a.z, b.z));
		bres.e2 = bres.e;
		if (bres.e2 > -bres.dx)
		{
			bres.e -= bres.dy;
			a.x += bres.sx;
		}
		if (bres.e2 < bres.dy)
		{
			bres.e += bres.dx;
			a.y += bres.sy;
		}
	}
}

t_point			create_point(t_mlx *mlx, int x, int y)
{
	t_point		point;

	point.z = mlx->map.tab[y][x] * mlx->img.zoom * mlx->map.amp;
	point.x = ((x - y) * mlx->img.zoom) + mlx->map.x;
	point.y = ((x + y) * (mlx->img.zoom / 2)) + mlx->map.y - point.z;
	return (point);
}

void			draw_map(t_mlx *mlx)
{
	int			x;
	int			y;
	t_point		a;

	y = 0;
	ft_bzero(mlx->img.data, (mlx->win.width * mlx->win.height * 4));
	while (y < mlx->map.height)
	{
		x = 0;
		while (x < mlx->map.width)
		{
			a = create_point(mlx, x, y);
			if (y < mlx->map.height - 1)
				trace_segment(mlx, a, create_point(mlx, x, (y + 1)));
			if (x < mlx->map.width - 1)
				trace_segment(mlx, a, create_point(mlx, (x + 1), y));
			x++;
		}
		y++;
	}
	if (!mlx_put_image_to_window(mlx->ptr, mlx->win.ptr, mlx->img.ptr, 0, 0))
		die(mlx, "ERROR: Failed to load image in the window! (draw_map)");
}
