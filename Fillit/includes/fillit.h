/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 02:24:28 by bfleury           #+#    #+#             */
/*   Updated: 2016/06/09 06:18:17 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../../Libft/libft.h"
# include <fcntl.h>

int					ft_solve(char *file_path);
int					ft_check_buffer(char *buffer);
int					ft_get_result(char *file_path);
int					ft_get_tetriminos(char *file_path, t_list *tetriminos);
int					ft_check_tetrimino(unsigned short bin);

unsigned short		ft_get_tetrimino(int fd);
unsigned short		ft_string2bin(char *buffer);

void				ft_puterror(void);
void				ft_print_result(void);

#endif
