/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:12:56 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 05:55:22 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static void	clean(t_mlx *mlx)
{
	int		i;

	if (mlx->map.tab)
	{
		i = 0;
		while (i++ < mlx->map.height)
			if (mlx->map.tab[i - 1])
				free(mlx->map.tab[i - 1]);
		if (mlx->map.tab)
			free(mlx->map.tab);
	}
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
	ft_putstr("ERROR: ");
	ft_putendl(msg);
	if (mlx)
		clean(mlx);
	exit(-1);
}
