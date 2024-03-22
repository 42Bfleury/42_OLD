/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:24:37 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 07:59:59 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_STRUCT_H
# define MLX_STRUCT_H
# define MAX_EVENT		32
# define MAX_PIXEL_NB	200000
# define UNIQ_BPP		4
# define FONT_WIDTH		10
# define FONT_HEIGHT	20

# import <OpenGL/gl3.h>

typedef int						(*func_t)();

typedef struct					glsl_info_s
{
	GLuint						pixel_vshader;
	GLuint						pixel_fshader;
	GLuint						pixel_program;
	GLint						loc_pixel_position;
	GLint						loc_pixel_texture;
	GLint						loc_pixel_winhalfsize;
	GLuint						image_vshader;
	GLuint						image_fshader;
	GLuint						image_program;
	GLint						loc_image_position;
	GLint						loc_image_winhalfsize;
	GLint						loc_image_texture;
	GLint						loc_image_pos;
	GLint						loc_image_size;
	GLuint						font_vshader;
	GLuint						font_fshader;
	GLuint						font_program;
	GLint						loc_font_position;
	GLint						loc_font_winhalfsize;
	GLint						loc_font_texture;
	GLint						loc_font_color;
	GLint						loc_font_posinwin;
	GLint						loc_font_posinatlas;
	GLint						loc_font_atlassize;
}								glsl_info_t;

typedef struct					mlx_img_list_s
{
	int							width;
	int							height;
	char						*buffer;
	GLfloat						vertexes[8];
	struct mlx_img_list_s		*next;
}								mlx_img_list_t;

typedef struct					mlx_img_ctx_s
{
	GLuint						texture;
	GLuint						vbuffer;
	struct mlx_img_list_s		*img;
	struct mlx_img_ctx_s		*next;
}								mlx_img_ctx_t;

typedef struct					mlx_win_list_s
{
  void							*winid;
  struct mlx_img_ctx_s			*img_list;
  int							nb_flush;
  int							pixmgt;
  struct mlx_win_list_s			*next;
}								mlx_win_list_t;

typedef struct					mlx_s
{
	void						*appid;
	struct mlx_win_list_s		*win_list;
	struct mlx_img_list_s		*img_list;
	void						(*loop_hook)(void *);
	void						*loop_hook_data;
	void						*loop_timer;
	struct mlx_img_list_s		*font;
	int							main_loop_active;
}								mlx_t;

typedef struct					s_xpm_col
{
	int							name;
	int							col;
}								t_xpm_col;

typedef struct					s_col_name
{
	char						*name;
	int							color;
}								t_col_name;

#endif
