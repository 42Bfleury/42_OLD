/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:08:38 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 10:45:00 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_H
# define MLX_H

# ifndef MLX_NEW_WINDOW_H
#  import <Cocoa/Cocoa.h>
#  import <AppKit/NSOpenGLView.h>
# endif

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/mman.h>

# include "mlx_colors.h"

void			*mlx_init();

void			*mlx_new_window(mlx_t*m, int w, int h, char *t);
int				mlx_pixel_put(mlx_t*m, mlx_win_list_t*w, int x, int y, int c);
int				mlx_put_string(mlx_t*m, mlx_win_list_t*w, int x, int y, int c, char *s);
int				mlx_clear_window(mlx_t*m, mlx_win_list_t*w);
int				mlx_destroy_window(mlx_t*m, mlx_win_list_t*w);

void			*mlx_new_image(mlx_t*m, int w, int h);
char			*mlx_get_data_addr(mlx_img_list_t*i, int *bpp, int *sl, int *e);
void			*mlx_xpm_to_image(mlx_t*m, char **xpm, int *w, int *h);
void			*mlx_xpm_file_to_image(mlx_t*m, char *file, int *w, int *h);
unsigned int	mlx_get_color_value(mlx_t*m, int c);
int				mlx_put_image_to_window(mlx_t*m, mlx_win_list_t*w, mlx_img_list_t*i, int x, int y);
int				mlx_destroy_image(mlx_t *mlx, mlx_img_list_t *i);

int				mlx_mouse_hook (mlx_win_list_t*w, int (*f)(), void *p);
int				mlx_key_hook (mlx_win_list_t*w, int (*f)(), void *p);
int				mlx_expose_hook (mlx_win_list_t*w, int (*f)(), void *p);
int				mlx_loop_hook (mlx_t*m, void (*f)(), void *p);
int				mlx_loop (mlx_t *m);
int				mlx_hook(mlx_win_list_t*w, int x_event, int x_mask, int (*f)(), void *p);
int				mlx_do_key_autorepeatoff(mlx_t *m);
int				mlx_do_key_autorepeaton(mlx_t *m);

int				mlx_do_sync(mlx_t *mlx);
int				mlx_shaders(glsl_info_t *glsl);
int				mlx_int_str_str(char *s, char *find, int len);
int				mlx_int_str_str_cote(char *s, char *find, int len);

char			**mlx_int_str_to_wordtab(char *s);

#endif
