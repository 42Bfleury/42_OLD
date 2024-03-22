/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 04:00:16 by bfleury           #+#    #+#             */
/*   Updated: 2016/12/11 03:37:31 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define T			"- Fract'ol -"
# define W			800
# define H			W * 3 / 4
# define I_MAX		20

# define WHITE		(t_color){255, 255, 255}
# define BLACK		(t_color){0, 0, 0}

# include "../libft/includes/libft.h"
# include "../minilibx/includes/mlx.h"
# include <math.h>
# include <stdio.h>

typedef struct			s_color
{
	int					red;
	int					green;
	int					blue;
}						t_color;

typedef struct			s_fractal
{
	int					i;
	int					i_max;
	int					pause;
	int					choice;
	float				x;
	float				y;
	struct s_color		*colors;
}						t_fractal;

typedef struct			s_image
{
	void				*ptr;
	char				*data;
	float				zoom;
	int					width;
	int					height;
	int					bpp;
	int					sl;
	int					e;
}						t_image;

typedef struct			s_window
{
	void				*ptr;
	char				*title;
	int					width;
	int					height;
	int					mouse_x;
	int					mouse_y;
}						t_window;

typedef struct			s_mlx
{
	void				*ptr;
	struct s_window		win;
	struct s_image		img;
	struct s_fractal	fractal;
}						t_mlx;

void					init(int fractal);
void					print_instruction(void);
void					die(t_mlx *mlx, char *msg);
void					julia(t_mlx *mlx, int x, int y);
void					burning(t_mlx *mlx, int x, int y);
void					mandelbrot(t_mlx *mlx, int x, int y);
void					init_fractal(t_mlx *mlx, int fractal);
void					print_fractal(t_mlx *mlx, int x, int y);
void					zoom(t_mlx *mlx, int key, int x, int y);
void					image_put_pixel(t_mlx *mlx, int x, int y, t_color c);

int						quit(t_mlx *mlx);
int						draw(t_mlx *mlx);
int						key_hook(int key, t_mlx *mlx);
int						motion(int x, int y, t_mlx *mlx);
int						mouse_move(int x, int y, t_mlx *mlx);
int						mouse_hook(int key, int x, int y, t_mlx *mlx);

#endif
