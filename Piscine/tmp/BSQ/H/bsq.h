/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsalerne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 10:49:58 by qsalerne          #+#    #+#             */
/*   Updated: 2015/09/24 19:39:17 by qsalerne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

# define BUFFER_SIZE 1024

typedef struct		s_mapinfo
{
	int				fd;
	int				nb_line;
	int				nb_column;
	char			empty;
	char			blob;
	char			square;
	int				coord[2];
	int				size;
}					t_mapinfo;

int					ft_strlen(char *str);
void				ft_putstr(char *str);
char				ft_puterror(void);
int					ft_atoi(char *str);
char				ft_create_map_info(t_mapinfo *mapinfo, char *path);
char				ft_resolve_file(char *path);

#endif
