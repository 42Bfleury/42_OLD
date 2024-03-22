/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 09:56:56 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 11:00:26 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static void	init_window(t_mlx *mlx, int width, int height, char *title)
{
	mlx->win.width = width;
	mlx->win.height = height;
	mlx->win.title = title;
	mlx->win.ptr = mlx_new_window(mlx->ptr, width, height, title);
	if (!mlx->win.ptr)
		die(mlx, "Failed to create new window!");
}

static void	init_image(t_mlx *mlx)
{
	mlx->img.width = mlx->win.width;
	mlx->img.height = mlx->win.height;
	if (!(mlx->img.ptr = mlx_new_image(mlx->ptr, mlx->win.width,
		mlx->win.height)))
		die(mlx, "Failed to create new image!");
	if (!(mlx->img.data = mlx_get_data_addr(mlx->img.ptr, &mlx->img.bpp,
		&mlx->img.sl, &mlx->img.e)))
		die(mlx, "Failed to get the image data address!");
}

void		init(int fractal)
{
	t_mlx		mlx;

	ft_bzero(&mlx, sizeof(mlx));
	if (!(mlx.ptr = mlx_init()))
		die(&mlx, "Failed to initialize MLX library!");
	init_window(&mlx, W, H, T);
	init_image(&mlx);
	init_fractal(&mlx, fractal);
	draw(&mlx);
	mlx_hook(mlx.win.ptr, 17, 0, quit, &mlx);
	mlx_hook(mlx.win.ptr, 2, 1, key_hook, &mlx);
	mlx_hook(mlx.win.ptr, 6, 1, mouse_move, &mlx);
	mlx_mouse_hook(mlx.win.ptr, mouse_hook, &mlx);
	mlx_loop_hook(mlx.ptr, draw, &mlx);
	print_instruction();
	if (!mlx_loop(mlx.ptr))
		die(&mlx, "Failed to initialize MLX loop!");
}
