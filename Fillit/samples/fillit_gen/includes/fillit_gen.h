/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_gen.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 00:58:48 by bfleury           #+#    #+#             */
/*   Updated: 2016/01/14 04:15:40 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_GEN_H
# define FILLIT_GEN_H
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../../Libft/libft.h"

void		ft_print_tetrimino(t_list **list, int index);
void		ft_print_tetriminos(t_list *list, int *index, size_t size);

t_list		*ft_get_tetrimino(int fd);
t_list		*ft_get_tetriminos(void);

#endif
