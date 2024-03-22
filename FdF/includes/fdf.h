/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:46:42 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/21 06:00:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define FDF_WIN_T		"- FdF -"
# define FDF_WIN_W		1920
# define FDF_WIN_H		FDF_WIN_W * 9 / 16
# define FDF_ZOOM_MAX	1000
# define FDF_AMP_MAX	3

# define LBLUE	(t_color){100, 100, 255}
# define DBLUE	(t_color){0, 0, 255}
# define BROWN	(t_color){153, 102, 0}
# define GREEN	(t_color){51, 255, 51}
# define GREY	(t_color){84, 84, 84}
# define WHITE	(t_color){255, 255, 255}

# include "../libft/includes/get_next_line.h"
# include "../minilibx/includes/mlx.h"
# include <fcntl.h>
# include <math.h>

typedef struct			s_bres
{
	int					dx;
	int					dy;
	int					sx;
	int					sy;
	int					e;
	int					e2;
}						t_bres;

typedef struct			s_color
{
	unsigned char		red;
	unsigned char		green;
	unsigned char		blue;
}						t_color;

typedef struct			s_point
{
	int					x;
	int					y;
	int					z;
}						t_point;

typedef struct			s_map
{
	char				*file;
	int					**tab;
	int					width;
	int					height;
	int					x;
	int					y;
	float				amp;
}						t_map;

typedef struct			s_image
{
	void				*ptr;
	char				*data;
	int					zoom;
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
}						t_window;

typedef struct			s_mlx
{
	void				*ptr;
	struct s_window		win;
	struct s_image		img;
	struct s_map		map;
}						t_mlx;

int						quit(t_mlx *mlx);
int						**parse_map(t_mlx *mlx);
int						get_nb_line(t_mlx *mlx);
int						key_hook(int key, t_mlx *mlx);
int						mouse_hook(int key, int x, int y, t_mlx *mlx);

void					reset(t_mlx *mlx);
void					draw_map(t_mlx *mlx);
void					zoom(t_mlx *mlx, int key);
void					die(t_mlx *mlx, char *msg);
void					init(int width, int height, char *title, char *file);

t_point					create_point(t_mlx *mlx, int y, int z);

#endif
