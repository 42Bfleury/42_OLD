/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:47:00 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/23 07:39:45 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static void	clean(t_mlx *mlx)
{
	if (mlx->fractal.colors)
		free(mlx->fractal.colors);
	if (mlx->img.ptr)
		mlx_destroy_image(mlx->ptr, mlx->img.ptr);
	if (mlx->win.ptr)
		mlx_destroy_window(mlx->ptr, mlx->win.ptr);
	if (mlx->ptr)
		free(mlx->ptr);
}

int			quit(t_mlx *mlx)
{
	if (mlx)
		clean(mlx);
	exit(0);
}

void		die(t_mlx *mlx, char *msg)
{
	ft_putendl(msg);
	if (mlx)
		clean(mlx);
	exit(-1);
}
