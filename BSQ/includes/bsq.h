/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:24:13 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/19 23:30:27 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# define BUFFER_SIZE 5

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_map_info
{
	int		height;
	int		length;
	char	empty;
	char	obstacle;
	char	full;
}			t_map_info;

typedef struct s_map
{
	int			fd;
	int			nb_line;
	int			bytes_read;
	char		**map;
	char		*line;
	char		*filename;
	char		buffer[BUFFER_SIZE];
	char		c_full;
	char		c_empty;
	char		c_obstacle;
	char		**content;
	t_map_info	info;
}	t_map;

typedef struct s_square {
	int	size;
	int	line;
	int	col;
}	t_square;

void		free_map(t_map map);
void		ft_putstr(char *str);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
int			ft_error(char *message);
int			ft_init_map(t_map *map);
int			ft_is_printable(char c);
int			ft_str_is_num(char *str);
char		*ft_strncat(char *dst, char *src, unsigned int n);
t_square	find_bsq(int **math_map, int length, int height);
int			**new_map(t_map *terrain);
int			ft_min(int a, int b, int c);
int			ft_open_file(t_map *map);
int			ft_read_file(t_map *map);
int			ft_get_line(t_map *map);

#endif
