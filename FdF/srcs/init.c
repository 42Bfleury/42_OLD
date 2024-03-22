/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 06:41:06 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 09:03:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	init_window(t_mlx *mlx, int width, int height, char *title)
{
	mlx->win.width = width;
	mlx->win.height = height;
	mlx->win.title = title;
	if (!(mlx->win.ptr = mlx_new_window(mlx->ptr, width, height, title)))
		die(mlx, "Failed to create new window!");
}

static void	init_image(t_mlx *mlx)
{
	if (!(mlx->img.ptr = mlx_new_image(mlx->ptr, mlx->win.width,
		mlx->win.height)))
		die(mlx, "Failed to create new image!");
	if (!(mlx->img.data = mlx_get_data_addr(mlx->img.ptr, &mlx->img.bpp,
		&mlx->img.sl, &mlx->img.e)))
		die(mlx, "Failed to get the image data address!");
}

static void	init_map(t_mlx *mlx, char *file)
{
	mlx->map.file = file;
	mlx->map.height = get_nb_line(mlx);
	mlx->map.tab = parse_map(mlx);
}

void		reset(t_mlx *mlx)
{
	t_point		c;

	mlx->map.amp = 1;
	mlx->img.zoom = mlx->win.width / (mlx->map.width * 3);
	mlx->img.zoom -= mlx->img.zoom % 2;
	c = create_point(mlx, mlx->map.width / 2, mlx->map.height / 2);
	mlx->map.x = mlx->win.width / 2 - (c.x - mlx->map.x);
	mlx->map.y = mlx->win.height / 2 - (c.y - mlx->map.y);
	draw_map(mlx);
}

void		init(int width, int height, char *title, char *file)
{
	t_mlx		mlx;

	ft_bzero(&mlx, sizeof(mlx));
	if (!(mlx.ptr = mlx_init()))
		die(&mlx, "Failed to initialize MLX library!");
	init_map(&mlx, file);
	init_window(&mlx, width, height, title);
	init_image(&mlx);
	reset(&mlx);
	mlx_hook(mlx.win.ptr, 2, 1, key_hook, &mlx);
	mlx_hook(mlx.win.ptr, 17, 0, quit, &mlx);
	mlx_mouse_hook(mlx.win.ptr, mouse_hook, &mlx);
	if (!mlx_loop(mlx.ptr))
		die(&mlx, "Failed to initialize MLX loop!");
}
