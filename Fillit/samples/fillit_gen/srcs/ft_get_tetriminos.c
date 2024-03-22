/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetriminos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 02:36:08 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/29 05:24:37 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit_gen.h"

t_list		*ft_get_tetriminos(void)
{
	int		fd;
	t_list	*tetrimino;
	t_list	*tetriminos_list;

	if ((fd = open("includes/tetriminos.list", O_RDONLY)) == -1)
		return (NULL);
	tetriminos_list = ft_get_tetrimino(fd);
	while ((tetrimino = ft_get_tetrimino(fd)))
		ft_lstadd(&tetriminos_list, tetrimino);
	close(fd);
	return (tetriminos_list);
}
